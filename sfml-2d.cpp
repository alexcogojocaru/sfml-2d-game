// sfml-2d.cpp : Defines the entry point for the application.
//

#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

	b2Vec2 gravity(0, 0);
	b2World world(gravity);

	return 0;
}
