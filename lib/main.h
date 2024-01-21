#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <time.h>

#define INIT_WIN_W (800)
#define INIT_WIN_H (600)

// The global `SDL_Window *`
extern SDL_Window *w;
// The global `SDL_Renderer *`
extern SDL_Renderer *r;
// The global mouse x position
extern int mx;
// The global mouse y position
extern int my;
// The global window width
extern int ww;
// The global window height
extern int wh;
//	The aspect ratio of the window (as a float), as determined by the global window dimensions
#define ASPECT_RATIO (ww/(float)wh)
//	Horizontal center of the screen (as a float)
#define X_POS_CENTER (ww/2.0)
//	Vertical center of the screen (as a float)
#define Y_POS_CENTER (wh/2.0)