#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1080,720), "Avoid Bullet" , sf :: Style ::Close | sf :: Style ::Resize);
	sf::RectangleShape player(sf::Vector2f (100.0f,100.0f ));
	player.setPosition(206.0f, 206.0f);
	sf::Texture playerTexture;
	playerTexture.loadFromFile("playerplane.png");
	player.setTexture(&playerTexture);
	//player.setFillColor(sf::Color::Green);

	sf::Vector2u textureSize = playerTexture.getSize();
	textureSize.x /= 3;
	textureSize.y /= 9;

	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				//std::cout << "New window width: " << evnt.size.width << "New window height: " << evnt.size.height << std::endl;
				printf("New window width: %i New window height: %i\n", evnt.size.width, evnt.size.height);
				break;
			case sf::Event::TextEntered:
				if (evnt.text.unicode<128)
				{
					printf("%c", evnt.text.unicode);
				}
				
			}
			if (evnt.type == evnt.Closed)
			{
				window.close();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			player.move(-0.1f,0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			player.move(0.0f, -0.1f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			player.move(0.1f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			player.move(0.0f, 0.1f);
		}
		window.clear();
		window.draw(player);
		window.display();
	}

	return 0;
}