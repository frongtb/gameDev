#pragma once

#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/System.hpp>
#include<iostream>

using namespace sf;

class Player
{
private:
	Texture *texture;
	Sprite sprite;
	RectangleShape hitBox;

	int controls[5];

	int level;
	int exp;
	int expNext;

	int HP;
	int hpMax;

	int damage;
	int damageMax;

	int score;

public:
	Player(Texture* texture, int UP = 22,int DOWN = 18,int RIGHT = 3,int LEFT = 0,int SHOOT = 57);
	virtual ~Player();

	void Movement();
	void Update();
	void Draw(RenderTarget &target);
};

