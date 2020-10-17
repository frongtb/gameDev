#pragma once

#include"Player.h"

class Game
{
private:
	RenderWindow *window;

	Player *player;
	Texture playerTexture;

public:
	Game(RenderWindow *window);
	virtual ~Game();

	//Accessor
	inline RenderWindow& getWindow() { return *this->window; }

	//Setters

	//functions
	void Update();
	void Draw();
};

