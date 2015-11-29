#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <fstream>
#include <cctype>
#include <string>
#include "Gamestatus.h"
#include "Tilemap.h"

using namespace std;

int main() {

	//Ikkunan luonti
	sf::RenderWindow		window(sf::VideoMode(800, 800), "Bomberman");

	//Pelitilan olio
	Gamestatus				gs;

	Tilemap					lvl1;


	//LEVEL1 Tilemapin alustus
	lvl1.init();

	// IKKUNAN WHILELOOP
	while (window.isOpen()) {

		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event)) {

			// Ikkunan sulkeminen ruksista, Lis‰‰ escille toiminta
			if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
				window.close();
		}

		if (gs.getgamestatus() == 0) {


			window.clear();

			//Tilemapin piirt‰minen
			lvl1.drawTilemap(window);


			window.display();
		}
	}
}