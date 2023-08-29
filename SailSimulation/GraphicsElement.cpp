#include "GraphicsElement.h"
#include "App.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>
using namespace std;



	GraphicsElement::GraphicsElement(const char* filePath, vector<int> imageDimensions, int scale, App* appPointer) :appPointer(appPointer) {
		this->loadTexture(filePath);
		this->stablishSource(imageDimensions);
		this->updateScale(imageDimensions, scale);
		this->updatePosition({ 0,0 });
	}

	void GraphicsElement::updatePosition(vector<float> coordPositions) {
		destination.x = coordPositions[0];
		destination.y = coordPositions[1];
	}
	void GraphicsElement::updateRender() {
		SDL_RenderCopy(appPointer->renderer, texture, &source, &destination);
	}

	void GraphicsElement::loadTexture(const char* filename) {
		SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", filename);
		texture = IMG_LoadTexture(appPointer->renderer, filename);
		if (texture == NULL) {
			cout << "Failed to load texture. Error: " << SDL_GetError() << endl;
		}
	}
	void GraphicsElement::stablishSource(vector<int> imageDimensions) {
		source.x = 0;
		source.y = 0;
		source.w = imageDimensions[0];
		source.h = imageDimensions[1];
	}
	void GraphicsElement::updateScale(vector<int> coordPositions, int scale) {
		destination.w = coordPositions[0] / scale;
		destination.h = coordPositions[1] / scale;
	}
