//
// Created by Caleb O'Neal      on 1/22/24.
//

#include "WavHeader.hpp"

#include <fstream>
#include <iostream>

bool loadWavHeader(const std::string &filePath, WavHeader &header) {
    std::ifstream file(filePath, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << filePath << std::endl;
        return false;
    }

    // Read the WAV header
    file.read(reinterpret_cast<char*>(&header), sizeof(WavHeader));
    file.close();

    // Check if the header indicates a valid WAV file
    if (std::strncmp(header.chunkID, "RIFF", 4) != 0 ||
        std::strncmp(header.format, "WAVE", 4) != 0 ||
        std::strncmp(header.subchunk1ID, "fmt ", 4) != 0 ||
        header.audioFormat != 1) {
        std::cerr << "Invalid or unsupported WAV file format" << std::endl;
        return false;
        }

    // Valid WAV file format
    return true;
}
