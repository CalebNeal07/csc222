#include <iostream>

#include <SDL.h>
#include <fstream>
#include <vector>

#include "SDLAudioHandler.hpp"

int main(const int argc, char** argv) {
    // Check if a WAV file path is provided
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <wav_file_path>" << std::endl;
        return 1;
    }

    // Read the WAV file
    std::ifstream wavFile(argv[1], std::ios::binary);
    if (!wavFile.is_open()) {
        std::cerr << "Failed to open WAV file: " << argv[1] << std::endl;
        return 1;
    }

    // Get the length of the file
    wavFile.seekg(0, std::ios::end);
    std::streampos fileSize = wavFile.tellg();
    wavFile.seekg(0, std::ios::beg);

    // Read the entire file into a vector
    std::vector<Uint8> wavBuffer(static_cast<size_t>(fileSize));
    wavFile.read(reinterpret_cast<char*>(wavBuffer.data()), fileSize);
    wavFile.close();

    // Instantiate SDLAudioHandler
    SDLAudioHandler audioHandler;

    // Initialize SDL and the audio handler
    if (audioHandler.init()) {
        // Play the WAV buffer
        audioHandler.playWavBuffer(wavBuffer.data(), static_cast<Uint32>(fileSize));

        // Wait for the audio to finish (you can replace this with your own logic)
        SDL_Delay(5000);
    }

    // Play the WAV file
    audioHandler.playWavBuffer(wavBuffer.data(), static_cast<Uint32>(fileSize));

    // Wait for the audio to finish (you can replace this with your own logic)
    SDL_Delay(5000);

    return 0;

    return 0;
}
