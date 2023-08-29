#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class App {
public:
	SDL_Renderer* renderer;
	SDL_Window* window;
	int up;
	int down;
	int left;
	int right;
	int SCREEN_WIDTH = 1280;
	int SCREEN_HEIGHT = 720;


	App();
	void cleanScreen();
	void listenInput();
	void presentScene();

private:
	void initSDL();
	void doKeyDown(SDL_KeyboardEvent* event);
	void doKeyUp(SDL_KeyboardEvent* event);
};

