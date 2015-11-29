/*#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <fstream>
#include <cctype>
#include <string>
#include "Animation.h"
#include "AnimatedSprite.h"


class Player : public sf::RectangleShape {
public:
	Player(); // Konst
	~Player(); // Destr
	Player(); // LUo hahmo
	void draw(sf::RenderWindow &);

	float pos_x = 0;
	float pos_y = 0;

	void walkDown();
	void walkLeft();
	void walkRight();
	void walkUp();

	sf::Texture texture;
	sf::Image spritesheet;

	float speed = 80.f;
	bool noKeyWasPressed = true;
};

*/