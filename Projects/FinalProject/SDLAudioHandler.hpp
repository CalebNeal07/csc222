//
// Created by Caleb O'Neal      on 1/22/24.
//

#ifndef SDLAUDIOHANDLER_HPP
#define SDLAUDIOHANDLER_HPP
#include <SDL_audio.h>
#include <SDL.h>


class SDLAudioHandler {
public:
    SDLAudioHandler();
    ~SDLAudioHandler();

    bool init();
    void playWavBuffer(const Uint8* buffer, Uint32 length);

private:
    SDL_AudioSpec audioSpec;
    SDL_AudioDeviceID audioDevice;
    Uint8* audioBuffer;
    Uint32 audioBufferSize;
    Uint32 bufferPosition;

    static void audioCallback(void* userdata, Uint8* stream, int len);
};


#endif //SDLAUDIOHANDLER_HPP
