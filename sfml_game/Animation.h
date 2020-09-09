#pragma once
#include<SFML\Graphics.hpp>
class Animation
{
	public Animation(sf::Texture* texture ,sf::Vector2u imageCout ,float switchTime);
~Animation();

public:
	sf::IntRect uvRect;

private:
	sf::Vector2u imageCout;
	sf::Vector2u currentimage;

	float totalTime;
	float switchTime;
};

