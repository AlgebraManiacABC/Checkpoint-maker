#include "events.h"
#include "main.h"

int handleEvents(bool *shouldClose, Uint32 * buttonsHeld, Uint32 * mouseState)
{
	*mouseState = SDL_GetRelativeMouseState(&mx, &my);

	SDL_Event event;
	Uint32 eventCount = 0;
	while(SDL_PollEvent(&event))
	{
		eventCount++;
		switch(event.type)
		{
			case SDL_QUIT:
				(*shouldClose) = true;
				return eventCount;
			case SDL_WINDOWEVENT:
				if(event.window.event == SDL_WINDOWEVENT_RESIZED)
				{
					ww = event.window.data1;
					wh = event.window.data2;
				}
				break;
			default:
				break;
		}
	}

	return eventCount;
}