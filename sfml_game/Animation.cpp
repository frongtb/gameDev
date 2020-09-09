#include "Animation.h"



Animation::Animation(sf::Texture* texture, sf::Vector2u imageCout, float switchTime);
{
	this->imageCount = imageCount;
	this->switchTime = switchTime;
	totalTime = 0.00f;
	currentimage.x = 0;


}



Animation::~Animation();
{

}