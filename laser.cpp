#include "laser.h"
#include"sethings.h"
Laser::Laser(float x, float y){
	texture.loadFromFile(IMAGES_FOLDER + BIG_LASER_FILE);
	sprite.setTexture(texture);
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	sprite.setPosition (x - g_bounds.width / 2, y - g_bounds.height / 2);

}
void Laser::update() {
	sprite.move(0.f, -LASER_SPEED);
}
void Laser::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Laser::getHitBox() { return sprite.getGlobalBounds();}
sf::Vector2f Laser::getPosition(){ return sprite.getPosition();}
