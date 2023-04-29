#pragma once
#include <raylib.h>
#include <iostream>
#include <raygui.h>



class GameSettings
{
private:
	int windowWidth{1200};
	int windowHeight{700};
	std::string gameName{ "Factory Clicker" };
	int gameFPS{ 60 };
	bool isFirstStart{ true };

public:
	int getWindowWidth() const;
	int getWindowHeight() const;
	std::string getWindowName() const;
	void createWindow();
	static GameSettings& getInstance();
	void startLoadingMenu();


private:
	// Create singleton
	GameSettings();
};

