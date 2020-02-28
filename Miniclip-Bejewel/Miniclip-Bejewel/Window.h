#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Constants.h"
#include "GlobalVariables.h"
#include "Texture.h"

class Window
{
public:
	Window();

	~Window();

	void show();

	bool loadMedia();

	bool loadGame();

private:

	Texture backgroundTexture;

};

