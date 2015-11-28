#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include<fstream>
#include<cctype>
#include<string>

using namespace std;

int main() {

	sf::RenderWindow window(sf::VideoMode(800, 800), "Bomberman");


	//kenttien valinta puuttuu!!
	ifstream openfile("lvl1.txt");
	// Tilejen textuurit
	sf::Texture tileTexture;
	sf::Sprite tiles;
	// Kartan koko 20 tile‰ x 20 tile‰, x = 20*40 *  y = 20*40 = 800x * 800y
	sf::Vector2i map[20][20];
	sf::Vector2i loadCounter = sf::Vector2i(0, 0);
	


	if (openfile.is_open()) {

		string tileLocation;
		openfile >> tileLocation;
		tileTexture.loadFromFile(tileLocation);
		tiles.setTexture(tileTexture);

		//Tiletekstitiedoston luenta  ja muuntaminen kuviksi
		while (!openfile.eof()) {

			string loader;
			openfile >> loader;
			char x = loader[0], y = loader[2];
			if (!isdigit(x) || !isdigit(y))
				map[loadCounter.x][loadCounter.y] = sf::Vector2i(-1, -1);
			else
				map[loadCounter.x][loadCounter.y] = sf::Vector2i(x - '0', y - '0');
			// vaihtaa tileteksti tiedoston rivi‰, kun rivilt‰ loppuu tileID
			if (openfile.peek() == '\n') {

				//Resetoi x koordinaatin 0
				loadCounter.x = 0;
				// lis‰‰ y koordinaattia yhdell‰
				loadCounter.y++;
			}
			else
				loadCounter.x++;
		}
		loadCounter.y++;

	}

	// IKKUNAN WHILELOOP
	while (window.isOpen()) {

		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event)) {

			// Ikkunan sulkeminen ruksista, Lis‰‰ escille toiminta
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		//Tilemapin piirt‰minen
		for (int i = 0; i < loadCounter.x; i++) {
			for (int j = 0; j < loadCounter.y; j++) {
				if (map[i][j].x != -1 && map[i][j].y != -1) {
					tiles.setPosition(i * 40, j * 40);
					tiles.setTextureRect(sf::IntRect(map[i][j].x * 40, map[i][j].y * 40, 40, 40));
					window.draw(tiles);
				}
			}
		}

		window.display();

	}
}