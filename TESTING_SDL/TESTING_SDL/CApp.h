#ifndef _CAPP_H_
#define _CAPP_H_

#include <iostream>
#include <SDL.h>

class CApp {
private:
    bool Running;

    SDL_Window* win;
    SDL_Renderer* ren;

public:
    CApp();

    int OnExecute();

public:
    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLoop();

    void OnRender();

    void OnCleanup();
};

#endif