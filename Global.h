#ifndef GLOBAL_H
#define GLOBAL_H

#include <SDL2/SDL.h>

#include "content.h"

typedef struct Global {
    struct Window {
        SDL_Window *window;
        int width;
        int height;
    } Window;
    SDL_Renderer *renderer;
    char *base_path;
    SDL_bool should_quit;
    int exit_code;
    SDL_Texture sprites[NUM_OF_CONTENTS];
} Global;

#endif
