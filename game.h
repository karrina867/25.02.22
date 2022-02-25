#pragma once
#include "SFML/Graphics.hpp"
#include"plaer.h"
#include "Meteor.h"
#include<vector>
#include <list>
#include"laser.h"
class Game {
public:
	enum GameState { INTRO, PLAY, GAME_OVER };
	Game();//конструктор
	void play();
private:
	sf::RenderWindow window;//класс, создаёт окно
	Player player;
	std::vector<Meteor*> meteors;
	std::list<Laser*> laser;
	GameState game_state = PLAY;
	void check_events();//проверить событие
	void update();//обновить
	void draw();
};