#include "Objects/Bullet.h"

Bullet CreateBullet()
{
	Bullet bullet;

	bullet.position.x = 0;
	bullet.position.y = 0;

	bullet.direction.x = 0;
	bullet.direction.y = 0;

	bullet.isMoving = false;

	bullet.radius = 10.0f;

	bullet.speed = 500.0f;

	bullet.texture = LoadTexture("resources/Bullet.png");

	return bullet;
}

void DrawBullet(Bullet bullet)
{
	DrawCircle(bullet.position.x, bullet.position.y, bullet.radius, RED);
	DrawTexture(bullet.texture, bullet.position.x - 12, bullet.position.y - 12, WHITE);
}