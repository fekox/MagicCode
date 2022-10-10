#pragma once
#include "raylib.h"
#include "Objects/Mouse.h"

struct MenuButton
{
	Vector2 pos;

	float width;
	float height;

	int size;

	Texture texture;

	Color color;
};

enum class Menu
{
	MainMenu,
	Play,
	Controlls,
	Rules,
	Credits,
	Quit
};

void InitMenu();
void MenuInputs(Mouse& mouse, int& optionSelect, bool& playGame);
void MenuCollisions(Mouse& mouse);
void DrawMenu(Texture2D menuBackGround, Font gameFont);
void DrawControlls();
void DrawRules();
void DrawCredits();