// sfml-2d.cpp : Defines the entry point for the application.
//

#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
	sf::CircleShape shape(50.0f);

	shape.setFillColor(sf::Color::Magenta);
	while (window.isOpen())
	{
		sf::Event event_;

		while (window.pollEvent(event_))
		{
			if (event_.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
