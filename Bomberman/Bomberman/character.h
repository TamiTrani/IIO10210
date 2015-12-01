<<<<<<< HEAD
#pragma once
=======
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
#ifndef CHARACTERH
#define CHARACTERH

#include <SFML/Graphics.hpp>

class Character : public sf::Drawable {

public:

<<<<<<< HEAD
	enum Direction { up, down, left, right };

	//Konstruktori
	Character(const sf::Texture& imagePath);

=======
	enum Direction {up, down, left, right};

	//Konstruktori
	Character(const sf::Texture& imagePath);
	
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
	//Destruktori
	virtual ~Character();

	//Piirtäminen
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
<<<<<<< HEAD

	//Liikkeet
	void moveUp(int);
	void moveDown(int);
	void moveLeft(int);
	void moveRight(int);

	sf::Texture texture;

	//Tekemättä //////////////////////////////////////////////////////////////
	void dropBomb();


=======
	
	//Liikkeet
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	//Tekemättä //////////////////////////////////////////////////////////////
	void dropBomb();
	
	
>>>>>>> 87e24d60fd19b73b7c242fc1dd096db6ec4ec7f7
	//Healthin getterit ja setterit
	void setHealth(int hp);
	int getHealth();

private:
	sf::Sprite pSprite;
	sf::Vector2i pSource;
	int width, height;
	int health;

};

#endif