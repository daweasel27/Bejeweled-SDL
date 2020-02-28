#include "Game.h"

Game::Game()
{
	srand((unsigned int)
	time(NULL));

}

Game::~Game()
{
	printf("Failed to load media!\n");
}

void Game::show() {
	bool isPlaying = true;

	while (isPlaying)
	{
		SDL_Event e;

		// Event loop
		while (SDL_PollEvent(&e))
		{
			//User requests quit
			if (e.type == SDL_QUIT || e.key.keysym.sym == SDLK_ESCAPE)
			{
				isPlaying = false;
				break;
			}

			//Load Game
			if (!loadMedia())
			{
				printf("Failed to load media!%s\n", SDL_GetError());
			}
			else
			{
				//Gets actual time
			}
		}

	}
}

bool Game::loadMedia() {

	return true;

}