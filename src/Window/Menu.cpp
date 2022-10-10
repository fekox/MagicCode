#include "Window/Menu.h"

MenuButton play;
MenuButton controlls;
MenuButton rules;
MenuButton credits;
MenuButton quit;

void InitMenu()
{
	//Play Button

	play.pos.x = static_cast<float>(GetScreenWidth() / 20);
	play.pos.y = static_cast<float>(GetScreenHeight() / 3.2);
	play.width = static_cast<float>(GetScreenWidth() / 7);
	play.height = static_cast<float>(GetScreenHeight() / 10);
	play.size = 40;

	play.color = ORANGE;

	//Controlls Button

	controlls.pos.x = static_cast<float>(GetScreenWidth() / 20);
	controlls.pos.y = static_cast<float>(GetScreenHeight() / 2.35);
	controlls.width = static_cast<float>(GetScreenWidth() / 3.1);
	controlls.height = static_cast<float>(GetScreenHeight() / 10);
	controlls.size = 40;

	controlls.color = ORANGE;

	//Rules Button

	rules.pos.x = static_cast<float>(GetScreenWidth() / 20);
	rules.pos.y = static_cast<float>(GetScreenHeight() / 1.84);
	rules.width = static_cast<float>(GetScreenWidth() / 5.6);
	rules.height = static_cast<float>(GetScreenHeight() / 10);
	rules.size = 40;

	rules.color = ORANGE;

	//Credits Button

	credits.pos.x = static_cast<float>(GetScreenWidth() / 1.5);
	credits.pos.y = static_cast<float>(GetScreenHeight() / 1.1);
	credits.width = static_cast<float>(GetScreenWidth() / 4.2);
	credits.height = static_cast<float>(GetScreenHeight() / 10);
	credits.size = 40;

	credits.color = ORANGE;

	//Quit Button

	quit.pos.x = static_cast<float>(GetScreenWidth() / 20);
	quit.pos.y = static_cast<float>(GetScreenHeight() / 1.53);
	quit.width = static_cast<float>(GetScreenWidth() / 7.8);
	quit.height = static_cast<float>(GetScreenHeight() / 10);
	quit.size = 40;

	quit.color = ORANGE;
}

void MenuCollisions(Mouse& mouse)
{
	//Play Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 3.5), static_cast<float>(play.width), static_cast<float>(play.height)}))
	{
		play.color = BLACK;
	}

	else
	{
		play.color = ORANGE;
	}

	//Controlls Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 2.5), static_cast<float>(controlls.width), static_cast<float>(controlls.height) }))
	{
		controlls.color = BLACK;
	}

	else
	{
		controlls.color = ORANGE;
	}

	//Rules Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 1.94), static_cast<float>(rules.width), static_cast<float>(rules.height) }))
	{
		rules.color = BLACK;
	}

	else
	{
		rules.color = ORANGE;
	}

	//Credits Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 1.5), static_cast<float>(GetScreenHeight() / 1.13), static_cast<float>(credits.width), static_cast<float>(credits.height) }))
	{
		credits.color = BLACK;
	}

	else
	{
		credits.color = ORANGE;
	}

	//Quit Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 1.59), static_cast<float>(quit.width), static_cast<float>(quit.height) }))
	{
		quit.color = BLACK;
	}

	else
	{
		quit.color = ORANGE;
	}
}

void MenuInputs(Mouse& mouse, int& optionSelect, bool& playGame)
{
	//Play Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 3.5), static_cast<float>(play.width), static_cast<float>(play.height) }))
	{
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			optionSelect = 1;
			playGame = true;
			HideCursor();
		}
	}

	//Controlls Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 2.5), static_cast<float>(controlls.width), static_cast<float>(controlls.height) }))
	{
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			optionSelect = 2;
		}
	}

	//Rules Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 1.94), static_cast<float>(rules.width), static_cast<float>(rules.height) }))
	{
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			optionSelect = 3;
		}
	}

	//Credits Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 1.5), static_cast<float>(GetScreenHeight() / 1.13), static_cast<float>(credits.width), static_cast<float>(credits.height) }))
	{
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			optionSelect = 4;
		}
	}

	//Quit Button
	if (CheckCollisionPointRec(mouse.position, Rectangle{ static_cast<float>(GetScreenWidth() / 20), static_cast<float>(GetScreenHeight() / 1.59), static_cast<float>(quit.width), static_cast<float>(quit.height) }))
	{
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
		{
			optionSelect = 5;
		}
	}
}

void DrawMenu(Texture2D menuBackGround, Font gameFont)
{
	ShowCursor();
	DrawTexture(menuBackGround, 0, 0, WHITE);
	DrawTextEx(gameFont, "  Magic\nAsteroids", { static_cast<float>(GetScreenWidth() / 20) , static_cast<float>(GetScreenHeight() / 20) }, 60, 0, ORANGE);

	//Play Button

	DrawRectangle(static_cast<int>(GetScreenWidth() / 20), static_cast<int>(GetScreenHeight() / 3.5), static_cast<int>(play.width), static_cast<int>(play.height), BLANK);
	DrawTextEx(gameFont, "PLAY", play.pos, static_cast<float>(play.size), 0, play.color);

	//Controlls Button

	DrawRectangle(static_cast<int>(GetScreenWidth() / 20), static_cast<int>(GetScreenHeight() / 2.5), static_cast<int>(controlls.width), static_cast<int>(controlls.height), BLANK);
	DrawTextEx(gameFont, "CONTROLLS", controlls.pos, static_cast<float>(controlls.size), 0, controlls.color);

	//Rules Button

	DrawRectangle(static_cast<int>(GetScreenWidth() / 20), static_cast<int>(GetScreenHeight() / 1.94), static_cast<int>(rules.width), static_cast<int>(rules.height), BLANK);
	DrawTextEx(gameFont, "RULES", rules.pos, static_cast<float>(rules.size), 0, rules.color);

	//Credits Button

	DrawRectangle(static_cast<int>(GetScreenWidth() / 1.5), static_cast<int>(GetScreenHeight() / 1.13), static_cast<int>(credits.width), static_cast<int>(credits.height), BLANK);
	DrawTextEx(gameFont, "CREDITS", credits.pos, static_cast<float>(credits.size), 0, credits.color);

	//Quit Button

	DrawRectangle(static_cast<int>(GetScreenWidth() / 20), static_cast<int>(GetScreenHeight() / 1.59), static_cast<int>(quit.width), static_cast<int>(quit.height), BLANK);
	DrawTextEx(gameFont, "QUIT", quit.pos, static_cast<float>(quit.size), 0, quit.color);

}

void DrawControlls()
{

}

void DrawRules()
{

}

void DrawCredits()
{

}