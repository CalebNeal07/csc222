#include <iostream>

#include <SDL.h>
#include <fstream>
#include <vector>
#include <csignal>

#include "SDLAudioHandler.hpp"
#include "WavHeader.hpp"

volatile bool quitFlag = false;

void signalHandler(int signal) {
    if (signal == SIGINT) {
        quitFlag = true;
    }
}

int main(const int argc, char** argv) {
    std::signal(SIGINT, signalHandler);

    // Check if a WAV file path is provided
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <wav_file_path>" << std::endl;
        return 1;
    }
    WavHeader wavHeader{};

    if (!loadWavHeader(argv[1], wavHeader)) {
        std::cerr << "Failed to open WAV header" << argv[1] << std::endl;
    }

    // Read the WAV file
    std::ifstream wavFile(argv[1], std::ios::binary);
    if (!wavFile.is_open()) {
        std::cerr << "Failed to open WAV file: " << argv[1] << std::endl;
        return 1;
    }

    // Get the length of the file
    wavFile.seekg(0, std::ios::end);
    const std::streampos fileSize = wavFile.tellg();
    wavFile.seekg(0, std::ios::beg);

    // Read the entire file into a vector
    std::vector<Uint8> wavBuffer(static_cast<size_t>(fileSize));
    wavFile.read(reinterpret_cast<char*>(wavBuffer.data()), fileSize);
    wavFile.close();

    // Instantiate SDLAudioHandler
    SDLAudioHandler audioHandler;

    // Initialize SDL and the audio handler
    if (audioHandler.init(wavHeader)) {
        // Play the WAV buffer
        audioHandler.playWavBuffer(wavBuffer.data(), fileSize);

        // Wait for the audio to finish (you can replace this with your own logic)
        SDL_Delay(60000);

        while (audioHandler.getQueuedAudioSize() > 0) {
            SDL_Delay(10);  // Optional delay to reduce CPU usage
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT) {
                    // Handle quit event (window closed, etc.)
                    quitFlag = true;
                    break;
                }

                if (quitFlag) {
                    return EXIT_SUCCESS;
                }
            }
        }
    }

    return EXIT_SUCCESS;
}
