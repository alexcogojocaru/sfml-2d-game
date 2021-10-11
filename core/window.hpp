#pragma once

#include <SFML/Graphics.hpp>
#include <stdint.h>

#define DEFAULT_TITLE "SFML Window"

namespace engine
{
	constexpr uint32_t DEFAULT_WIDTH  = 800u;
	constexpr uint32_t DEFAULT_HEIGHT = 600u;

	class Window
	{
	private:
		static Window* windowInstance;
		sf::RenderWindow* gameWindow;
		uint32_t	width;
		uint32_t	height;
		std::string title;

	public:
		Window(uint32_t width, uint32_t height, std::string title);
	
	public:
		~Window();

		static Window* getWindowInstance();
		sf::RenderWindow& getRenderWindow() const { return *gameWindow; }
	};
}