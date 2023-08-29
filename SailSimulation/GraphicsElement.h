#pragma once
#include "App.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>
using namespace std;

class GraphicsElement {
public:
	SDL_Texture* texture;
	App* appPointer;
	SDL_Rect source;
	SDL_Rect destination;

	GraphicsElement(const char* filePath, vector<int> imageDimensions, int scale, App* appPointer);
	void updatePosition(vector<float> coordPositions);
	void updateRender();
private:
	void loadTexture(const char* filename);
	void stablishSource(vector<int> imageDimensions);
	void updateScale(vector<int> coordPositions, int scale);
};
