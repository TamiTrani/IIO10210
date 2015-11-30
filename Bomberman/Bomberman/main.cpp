#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <fstream>
#include <cctype>
#include <string>
#include "Gamestatus.h"
#include "Tilemap.h"
#include "Character.h"

using namespace std;

int main() {

	//Ikkunan luonti
	sf::RenderWindow		window(sf::VideoMode(800, 800), "Bomberman");

	//Pelitilan olio
	Gamestatus				gs;
	
	//Ensimmäisen kentän luonti
	Tilemap					lvl1;

	//Characterin luonti
	sf::Texture pTexture;
	if (!pTexture.loadFromFile("liikkeet.png")) {
		cerr << "Texture Error" << endl;
	}

	Character				p1(pTexture);

	//LEVEL1 Tilemapin alustus
	lvl1.init();

	// IKKUNAN WHILELOOP
	while (window.isOpen()) {

		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event)) {

			// Ikkunan sulkeminen ruksista, Lisää escille toiminta
			if (event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape)
				window.close();
		}

		if (gs.getgamestatus() == 0) {


			window.clear();

			//Tilemapin piirtäminen
			lvl1.drawTilemap(window);


			//Pelaajan piirto ja ohjaus
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) //move up
			{
				p1.moveUp();
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) //move down
			{
				p1.moveDown();
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) //move right
			{
				p1.moveRight();
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) //move left
			{
				p1.moveLeft();
			}

			window.draw(p1);
			window.display();
		}
	}
}