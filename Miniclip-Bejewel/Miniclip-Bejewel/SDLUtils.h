#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Constants.h"
#include "GlobalVariables.h"
#include "Game.h"

class SDLUtils
{
public:
	SDLUtils();

	~SDLUtils();



private:
	//The window we'll be rendering to
	SDL_Window* windowInstance = NULL;

	//The window renderer
    SDL_Renderer * mRenderer = NULL;

	//The Game's start time
	Uint32 startTime;
};

