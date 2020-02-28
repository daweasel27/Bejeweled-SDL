#pragma once
#include "GlobalVariables.h"
#include <string>
#include <SDL_image.h>

class Board
{
private: 
	SDL_Texture* backgroundTexture;

public:
	void init();
	SDL_Rect* _rect;
};