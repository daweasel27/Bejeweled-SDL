#include "BoardGame.h"

void Board::init()
{

	_rect = new SDL_Rect();
	_rect->w = 1024;
	_rect->h = 768;
	_rect->x = 343;
	_rect->y = 87;

	//_gems = new Gem * [_columns];
	//for (int x = 0; x < _columns; x++)
	//{
	//	_gems[x] = new Gem[_rows];
	//}

	std::string path = "resources/images/Backdrop13.jpg";
	SDL_Surface* loadingSurface = IMG_Load(path.c_str());
	if (loadingSurface == NULL)
	{
		printf("%s\n", IMG_GetError());
		return;
	}

	backgroundTexture = SDL_CreateTextureFromSurface(renderer, loadingSurface);
	SDL_FreeSurface(loadingSurface);
	loadingSurface = NULL;

}
