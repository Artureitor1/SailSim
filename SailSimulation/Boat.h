#pragma once
#include "GraphicsElement.h"
#include "App.h"
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>

// Boat class
class Boat {
public:
	Boat(const char* filePath, vector<int> imageDimensions, int scale, App* appPointer);
	void setPositionTexture(vector <float> position);

	//updateDynamicVariables();
private:
	// Boat Texture
	GraphicsElement texture;
	//Position Boat variables
	vector <float> position; // xPosition, yPosition, alfaPosition (ClockWise respect the wing direction)
	//Velocity Boat variables 
	vector <float> velocity; // xVelocity, yVelocity, alfaVelocity (ClockWise respect the wing direction)
	//Acelaration Boar variables 
	vector <float> aceleration; // xAceleration , yAceleration, alfaAceleration (ClockWise respect the wing direction)

	// Initialize the systems of the boat
	//void initializeSubsystem();
	// Initialize the envioremental viarables
	//void initializeEnvironment();

	//Update the systems variables
	//void updateSubsystem();
	// Initialize the envioremental viarables
	//void updateEnvironment();
	//Get the dynamic variables
	//void solveDynamics();
};

