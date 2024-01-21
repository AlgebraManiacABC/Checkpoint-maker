#include "main.h"
#include "events.h"

int mx;
int my;

void run(void)
{
	bool shouldClose = false;
	while(!shouldClose)
	{
		Uint32 buttonsHeld;
		Uint32 mouseState;
		int eventCount = handleEvents(&shouldClose,&buttonsHeld,&mouseState);
		if(eventCount < 0)
		{
			ERRLOG("Error handling events: %s\n",getError());
			return;
		}

		SDL_RenderClear(r);
		SDL_RenderPresent(r);
	}
}