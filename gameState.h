#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>
#include "asteroid.h"
#include "player.h"
#include "bullet.h"
using namespace std;

class GameState
{
public:
	GameState();
	void initLevel();
	void splitAsteroid(Asteroid* roid);
	void addPlayer(Player* playa);
	void addAsteroid(Asteroid* roid);
	void addBullet(Bullet* bull);
	void delAsteroid();
	void delBullet();
	Player* getPlayer();
	Asteroid* getAsteroid();
	Asteroid* getCurrentAsteroid();
	Bullet* getBullet();
	Bullet* getCurrentBullet();

	bool noMoreAsteroid();
	bool noMoreBullet();
	void resetIteRoid();
	void resetIteBullet();

	bool zeroAsteroid();
	int getLevel();
private:
	vector<Asteroid*>::iterator iteRoid; // Asteroid iterator, pointing to current Asteroid object
	vector<Bullet*>::iterator iteBull; // Bullet iterator, pointing to current Bullet object
	vector<Asteroid*> leAsteroids;
	vector<Bullet*> leBullets;
	Player* lePlayer;

	int level;
	int minRoid;
	int maxRoid;
	double roidSpdLimit;
};

#endif /* GAMESTATE_H */