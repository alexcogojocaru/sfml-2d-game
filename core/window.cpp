#include "window.hpp"

namespace engine
{
	Window* Window::windowInstance = nullptr;

	Window::Window(uint32_t width, uint32_t height, std::string title)
		: width(width), height(height), title(title)
	{
		gameWindow = new sf::RenderWindow(sf::VideoMode(width, height), title);
	}

	Window::~Window()
	{
		delete gameWindow;
	}

	Window* Window::getWindowInstance()
	{
		if (windowInstance == nullptr)
		{
			windowInstance = new Window(DEFAULT_WIDTH, DEFAULT_HEIGHT, DEFAULT_TITLE);
		}

		return windowInstance;
	}
}