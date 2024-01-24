//
// Created by Caleb O'Neal      on 1/22/24.
//

#ifndef WAVHEADER_HPP
#define WAVHEADER_HPP

#include <SDL_stdinc.h>
#include <string>



struct WavHeader {
    char chunkID[4];
    Uint32 chunkSize;
    char format[4];
    char subchunk1ID[4];
    Uint32 subchunk1Size;
    Uint16 audioFormat;
    Uint16 numChannels;
    Uint32 sampleRate;
    Uint32 byteRate;
    Uint16 blockAlign;
    Uint16 bitsPerSample;
    char subchunk2ID[4];
    Uint32 subchunk2Size;
};

bool loadWavHeader(const std::string& filePath, WavHeader& header);



#endif //WAVHEADER_HPP
