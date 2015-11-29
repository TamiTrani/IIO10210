/*#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Animation.h"
#include "AnimatedSprite.h"
#include "Player.h"

using namespace std;

// Konstruktori ja destruktori
Player::Player() {}
Player::~Player() {}

// Hahmon luonti
Player::Player() {

	spritesheet.loadFromFile("liikkeet.png");
	sf::Texture texture;
	texture.loadFromImage(spritesheet);
	sf::Sprite sprite;
	sprite.setTexture(texture);

	this->setSize(sf::Vector2f(40, 40));
	this->setPosition(0, 0);
	this->setOrigin(40, 40);

}

void Player::walkDown() {

	sf::Keyboard::isKeyPressed(sf::Keyboard::S);
	pos_y += speed;
	noKeyWasPressed = false;

	Animation walkDown;
	walkDown.setSpriteSheet(texture);
	walkDown.addFrame(sf::IntRect(40, 120, 40, 40));
	walkDown.addFrame(sf::IntRect(80, 120, 40, 40));
	walkDown.addFrame(sf::IntRect(40, 120, 40, 40));
	walkDown.addFrame(sf::IntRect(0, 120, 40, 40));

}

void Player::walkLeft() {

	sf::Keyboard::isKeyPressed(sf::Keyboard::A);
	pos_x -= speed;
	noKeyWasPressed = false;

	Animation walkLeft;
	walkLeft.setSpriteSheet(texture);
	walkLeft.addFrame(sf::IntRect(40, 120, 40, 40));
	walkLeft.addFrame(sf::IntRect(80, 120, 40, 40));
	walkLeft.addFrame(sf::IntRect(40, 120, 40, 40));
	walkLeft.addFrame(sf::IntRect(0, 120, 40, 40));
}

void Player::walkRight() {

	sf::Keyboard::isKeyPressed(sf::Keyboard::D);
	pos_x += speed;
	noKeyWasPressed = false;

	Animation walkRight;
	walkRight.setSpriteSheet(texture);
	walkRight.addFrame(sf::IntRect(40, 40, 40, 40));
	walkRight.addFrame(sf::IntRect(80, 40, 40, 40));
	walkRight.addFrame(sf::IntRect(40, 40, 40, 40));
	walkRight.addFrame(sf::IntRect(0, 40, 40, 40));
}

void Player::walkUp(){

	sf::Keyboard::isKeyPressed(sf::Keyboard::W);
	pos_y += speed;
	noKeyWasPressed = false;

	Animation walkUp;
	walkUp.setSpriteSheet(texture);
	walkUp.addFrame(sf::IntRect(40, 0, 40, 40));
	walkUp.addFrame(sf::IntRect(80, 0, 40, 40));
	walkUp.addFrame(sf::IntRect(40, 0, 40, 40));
	walkUp.addFrame(sf::IntRect(0, 0, 40, 40));
}

void Player::draw(sf::RenderWindow & window) {
	window.draw(*this);
}
*/