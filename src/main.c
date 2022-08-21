#include <libs/SDL2/include/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window * window;
    
    window = SDL_CreateWindow("Test - Cringe C Usage",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 600, 600, SDL_WINDOW_RESIZABLE);
    
    if (window == NULL)
    {
        printf("Error during window making : %s", SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

