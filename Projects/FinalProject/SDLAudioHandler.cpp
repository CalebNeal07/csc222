//
// Created by Caleb O'Neal      on 1/22/24.
//

#include "SDLAudioHandler.hpp"

#include <iostream>

SDLAudioHandler::SDLAudioHandler() : audioDevice(0), audioBuffer(nullptr), audioBufferSize(0), bufferPosition(0) {
    // Constructor
}

SDLAudioHandler::~SDLAudioHandler() {
    // Destructor
    if (audioDevice != 0) {
        SDL_CloseAudioDevice(audioDevice);
    }

    delete[] audioBuffer;

    SDL_Quit();
}

bool SDLAudioHandler::init() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        std::cerr << "SDL initialization failed: " << SDL_GetError() << std::endl;
        return false;
    }

    // Set the audio specification
    audioSpec.freq = 44100;
    audioSpec.format = AUDIO_S16;
    audioSpec.channels = 2;
    audioSpec.samples = 1024;
    audioSpec.callback = audioCallback;
    audioSpec.userdata = this;

    // Open the audio device
    audioDevice = SDL_OpenAudioDevice(nullptr, 0, &audioSpec, nullptr, 0);
    if (audioDevice == 0) {
        std::cerr << "Failed to open audio device: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return false;
    }

    // Allocate audio buffer
    audioBufferSize = audioSpec.samples * audioSpec.channels * sizeof(Sint16);
    audioBuffer = new Uint8[audioBufferSize];

    // Start audio playback
    SDL_PauseAudioDevice(audioDevice, 0);

    return true;
}

void SDLAudioHandler::playWavBuffer(const Uint8* buffer, Uint32 length) {
    delete[] audioBuffer;

    // Allocate a new buffer and copy the WAV data
    audioBufferSize = length;
    audioBuffer = new Uint8[audioBufferSize];
    std::memcpy(audioBuffer, buffer, length);

    bufferPosition = 0; // Reset buffer position
}

void SDLAudioHandler::audioCallback(void* userdata, Uint8* stream, int len) {
    auto* audioHandler = static_cast<SDLAudioHandler*>(userdata);

    // If there's more data in the buffer, copy it to the stream
    if (audioHandler->audioBuffer != nullptr) {
        if (const int remainingBytes = audioHandler->audioBufferSize - audioHandler->bufferPosition; remainingBytes > 0) {
            const int bytesToCopy = (len < remainingBytes) ? len : remainingBytes;
            std::memcpy(stream, audioHandler->audioBuffer + audioHandler->bufferPosition, bytesToCopy);
            audioHandler->bufferPosition += bytesToCopy;
        } else {
            // No more data in the buffer, fill the stream with silence
            std::memset(stream, 0, len);
        }
    }
}
