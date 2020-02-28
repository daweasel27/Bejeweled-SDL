#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Game.h"

//Texture wrapper class
class Texture
{
public:	
	Texture();

	~Texture();

	bool loadTextureFromFile(std::string path, SDL_Renderer* gameRenderer);
private:
	//The actual hardware texture
	SDL_Texture* texture;

	//Image dimensions
	int mWidth;
	int mHeight;
};