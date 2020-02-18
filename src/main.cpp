#include "Game.h"

int main(int argc, char *argv[])
{
    SDLUtils sdl;
    sdl.init();

    Game w;
    w.show();

    return 0;
}
