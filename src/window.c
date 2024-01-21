#include "window.h"

int initWindow(Uint32 SDL_initFlags,
				Uint32 SDL_winFlags, Uint32 SDL_rendFlags,
				const char * winTitle,
				Uint32 win_x, Uint32 win_y, Uint32 win_w, Uint32 win_h,
				SDL_Window ** w, SDL_Renderer **r)
{
	int err = EXIT_SUCCESS;
	if( (err = SDL_Init(SDL_initFlags)) )
	{
		setError(ERR_MESG,"SDL Initialization error: %s",SDL_GetError());
		return EXIT_FAILURE;
	}

	(*w) = SDL_CreateWindow(winTitle, win_x, win_y, win_w, win_h, SDL_winFlags);
	if(!(*w))
	{
		setError(ERR_MESG,"SDL Window creation failure: %s",SDL_GetError());
		SDL_Quit();
		return EXIT_FAILURE;
	}

	(*r) = SDL_CreateRenderer(*w,-1,SDL_rendFlags);
	if(!(*r))
	{
		setError(ERR_MESG,"SDL_Renderer creation failure: %s",SDL_GetError());
		SDL_DestroyWindow(*w);
		SDL_Quit();
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}