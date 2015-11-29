#ifndef TILEMAPH
#define TILEMAPH

#include <iostream>
#include <SFML/Graphics.hpp>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

class Tilemap {
private:
public:


	// Tilejen textuurit
	sf::Texture				tileTexture;
	sf::Sprite				tiles;

	// Kartan koko 20 tileä x 20 tileä, x = 20*40 *  y = 20*40 = 800x * 800y
	sf::Vector2i			map[20][20];
	sf::Vector2i			loadCounter = sf::Vector2i(0, 0);


	void init();
	void drawTilemap(sf::RenderWindow & window);
	Tilemap();
	~Tilemap();
};

#endif