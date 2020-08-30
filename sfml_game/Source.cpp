#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
	sf::RenderWindow window(sf::VideoMode(512, 512), "Avoid Bullet" , sf :: Style ::Close | sf :: Style ::Resize);


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
			}
			if (evnt.type == evnt.Closed)
			{
				window.close();
			}
		}

	}

	return 0;
}