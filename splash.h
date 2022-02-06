#pragma once
#include "SFML/Graphics.hpp"
#include "const.h"

class SplashScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	SplashScreen() {
		texture.loadFromFile(SPLASH_FILE_NAME);
		sprite.setTexture(texture);
		sprite.setScale(1.2f,1.43f);
	}
	sf::Sprite getSprite() { return sprite; }
};