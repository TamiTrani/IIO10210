#include "character.h"

//Konstruktori
Character::Character(const sf::Texture& imagePath) :
<<<<<<< HEAD
	pSprite(imagePath), pSource(1, Character::down) {
	pSprite.setTextureRect(sf::IntRect(0, 80, 40, 40));
=======
						pSprite(imagePath),pSource(1, Character::down){
	pSprite.setTextureRect(sf::IntRect(0,80,40,40));
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
}

//Destruktori
Character::~Character() {

}

//Piirtäminen
void Character::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(pSprite, states);
}


//Liikkeet
<<<<<<< HEAD
void Character::moveUp(int rightcoord) {
=======
void Character::moveUp() {
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
	pSource.y = up;
	pSprite.move(0, -0.1);


<<<<<<< HEAD
	pSprite.setTextureRect(sf::IntRect(rightcoord, 0, 40, 40));

=======
	pSprite.setTextureRect(sf::IntRect(0,0, 40, 40));
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
	//Animaatio


}
<<<<<<< HEAD


void Character::moveDown(int downcoord) {
	pSource.y = down;
	pSprite.move(0, +0.1);

	pSprite.setTextureRect(sf::IntRect(downcoord, 80, 40, 40));

	//Animaatio
	

}
void Character::moveLeft(int leftcoord) {
	pSource.x = left;
	pSprite.move(-0.1, 0);

	pSprite.setTextureRect(sf::IntRect(leftcoord, 120, 40, 40));

	//Animaatio
	
}

void Character::moveRight(int rightcoord) {
	pSource.x = right;
	pSprite.move(+0.1, 0);

	pSprite.setTextureRect(sf::IntRect(rightcoord, 40, 40, 40));

	//Animaatio

	}


=======
void Character::moveDown() {
	pSource.y = down;
	pSprite.move(0, +0.1);
	
	pSprite.setTextureRect(sf::IntRect(0, 80, 40, 40));

	//Animaatio
}
void Character::moveLeft() {
	pSource.x = left;
	pSprite.move(-0.1, 0);

	pSprite.setTextureRect(sf::IntRect(0, 120, 40, 40));

	//Animaatio
}
void Character::moveRight() {
	pSource.x = right;
	pSprite.move(+0.1, 0);

	pSprite.setTextureRect(sf::IntRect(0, 40, 40, 40));

	//Animaatio
}
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
void Character::dropBomb() {

}

//Healthin getterit ja setterit
void Character::setHealth(int hp) {
	this->health = hp;
}
int Character::getHealth() {
	return health;
}