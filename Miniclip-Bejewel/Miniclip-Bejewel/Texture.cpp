#pragma once
#include "Texture.h"
#include "GlobalVariables.h"

Texture::Texture()
{
	printf("Unable to load image %s! SDL_image Error: %s\n",  IMG_GetError());

}

Texture::~Texture()
{
	printf("Unable to load image %s! SDL_image Error: %s\n",  IMG_GetError());

}

bool Texture::loadTextureFromFile(std::string path, SDL_Renderer* gameRenderer)
{
	SDL_Texture* finalTexture = NULL;

	//Load image from the given path
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		//Color key image
		SDL_SetColorKey(loadedSurface, SDL_TRUE, SDL_MapRGB(loadedSurface->format, 0, 0xFF, 0xFF));

		//Create texture from surface pixels
		finalTexture = SDL_CreateTextureFromSurface(gameRenderer, loadedSurface);
		if (finalTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}
		else
		{
			//Get image dimensions
			mWidth = loadedSurface->w;
			mHeight = loadedSurface->h;
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	//Return success
	texture = finalTexture;
	return texture != NULL;
}