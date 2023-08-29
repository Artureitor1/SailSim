#include "Boat.h"

#include "GraphicsElement.h"
#include "App.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>

	Boat::Boat(const char* filePath, vector<int> imageDimensions, int scale, App* appPointer) :texture(GraphicsElement(filePath, imageDimensions, scale, appPointer)) {
	}
	void Boat::setPositionTexture(vector <float> position) {
		texture.updatePosition(position);
		texture.updateRender();
	}




