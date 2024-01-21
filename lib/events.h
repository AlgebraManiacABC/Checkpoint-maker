#ifndef EVENTS_H
#define EVENTS_H

#include <stdbool.h>
#include <SDL2/SDL_types.h>
#include "debug.h"

NODISCARD
/**
 * Polls all incoming events through SDL
 * 
 * @param shouldClose Address to a bool which is set if SDL_QUIT (etc) is received
 * @param buttonsHeld Uint32 bitfield of any pertinent buttons held (to be sent to moveCamera)
 * @param mouseState Uint32 bitfield of any pertinent mouse information (retrieved from SDL_GetMouseState)
 * 
 * @returns The number of events polled, or (-1) if error
 */
int handleEvents(bool *shouldClose, Uint32 * buttonsHeld, Uint32 * mouseState);

#endif