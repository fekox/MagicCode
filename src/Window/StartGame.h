#pragma once
#include "Objects/Asteroid.h"
#include "Objects/PlayerShip.h"
#include "Objects/Bullet.h"

struct RestartMenu
{
	Vector2 pos;

	float width;
	float height;

	Texture texture;

	bool isActive;
};

struct RestartMenuButton
{
	float width;
	float height;

	int size;

	Color color;
};

void Input(bool& gameOn);
void Update();
void Collision();
void Draw();
void UnloadData();

void shipMovement();
void bulletMovement();

void asteroidMovement(Asteroid asteroid[], int const maxAteroids);
void AsteroidCollision(Ship& playerShip, Asteroid asteroid[]);
void BulletCollision();
bool CheckCollsisionCirCir(Vector2 Obj1Pos, float obj1Radius, Vector2 obj2Pos, float obj2Radius);

void objCollisionLimit(Vector2& shipPosition, int screenWidth, int screenHeight);
void AsteroidCollisionLimit(Asteroid asteroid[]);
void bulletCollisonLimit();

void RespawnAsteroids();

void mouseMovement();

void drawGame();

void DrawRestarGameMenu();
void RestarGameMenuCollisions();
void RestartGame();