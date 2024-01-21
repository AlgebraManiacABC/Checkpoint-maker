#include "main.h"
#include "window.h"
#include "run.h"

SDL_Window *w = NULL;
SDL_Renderer *r = NULL;
int ww = INIT_WIN_W;
int wh = INIT_WIN_H;

int main(int argc, char *argv[])
{
	char windowTitle[] = "SDL_Boilerplate";
	if(initWindow(SDL_INIT_EVERYTHING, SDL_WINDOW_RESIZABLE, SDL_RENDERER_ACCELERATED,
			windowTitle,
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			ww, wh, &w, &r))
	{
		ERRLOG("Initialization failure: %s\n",getError());
		return EXIT_FAILURE;
	}
	DEBUGLOG("Initialization success!\n");
	run();
	return EXIT_SUCCESS;
}