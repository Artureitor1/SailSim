
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <vector>
#include "App.h"
#include "GraphicsElement.h"
#include "Boat.h"
using namespace std;

int main(int argc, char* argv[])
{
	App app;
	Boat boat("res/Images/MinimalistCatamaran.png", { 4798,7101 }, 80, &app);
	vector <float> position = { 100, 100 };


	while (1)
	{
		app.cleanScreen();
		boat.setPositionTexture(position);
		app.listenInput();
		if (app.up)
		{
			position[1] = position[1] -4;
			boat.setPositionTexture(position);
		}

		if (app.down)
		{
			position[1] = position[1] + 4;
			boat.setPositionTexture(position);
		}

		if (app.left)
		{
			position[0] = position[0] - 4;
			boat.setPositionTexture(position);
		}

		if (app.right)
		{
			position[0] = position[0] + 4;
			boat.setPositionTexture(position);
		}

		app.presentScene();

		SDL_Delay(15);
	}

	return 0;
}



