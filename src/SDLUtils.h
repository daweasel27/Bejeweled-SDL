#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>

class SDLUtils
{
public:
	SDLUtils();

	~SDLUtils();

	//Loads main menu media
	bool loadMenu();

	//Loads Game Over menu media
	bool loadGameOver();

	//Loads Game media
	bool loadGame();

	//Frees main menu media
	void closeMenu();

	//Frees Game Over menu media
	void closeGameOver();

	//Frees Game media
	void closeGame();

	//Renders the main menu
	void renderMenu();

	//Renders the Game Over menu
	void renderGameOver(char *type);

	//Renders the Game
	void renderGame();

	//Show the window and start the game
	void show();

private:
	//The window we'll be rendering to
	SDL_Window* WindowInstance = NULL;

	//The window renderer
    SDL_Renderer * mRenderer = NULL;

	//Gem objects
	Gem gems[TOTAL_GEMS];

	//Pressed gems
	Gem *pressedGems[2];

	//Board instance
	Board board;

	//The Game's start time
	Uint32 startTime;
};

