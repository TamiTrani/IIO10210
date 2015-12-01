#include "Tilemap.h"



void Tilemap::init() {

	ifstream openfile("lvl1.txt");

	if (openfile.is_open()) {

		string tileLocation;
		openfile >> tileLocation;
		tileTexture.loadFromFile(tileLocation);
		tiles.setTexture(tileTexture);

		//Tiletekstitiedoston luenta  ja muuntaminen kuviksi
		while (!openfile.eof()) {

			string loader;
			openfile >> loader;
			//Lukee tekstitiedoston "soluja" ja erottelee arvot ottaen x ja y arvon. 0,0 esimerkiksi ensimm‰inen nolla on x koord ja toinen on y koord.
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
}

Tilemap::Tilemap() {


}

Tilemap::~Tilemap() {

}

void Tilemap::drawTilemap(sf::RenderWindow & window) {
	
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

}