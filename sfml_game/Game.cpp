#include "Game.h"

Game::Game(RenderWindow *window)

{
	this->window = window;
	window->setFramerateLimit(60);

	//init textures
	playerTexture.loadFromFile("Textures/spaceplane.gif"); 

	//init player
	player = new Player(&this->playerTexture);
}
Game::~Game()
{
	delete player;
}

void Game::Update()
{
	player->Update();
}

void Game::Draw()
{
	window->clear();

	player->Draw(*window);

	window->display();
}
