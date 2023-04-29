#include "GameSettings.h"

int GameSettings::getWindowWidth() const
{
	return windowHeight;
}

int GameSettings::getWindowHeight() const
{
	return windowHeight;
}

std::string GameSettings::getWindowName() const
{
	return gameName;
}

void GameSettings::createWindow()
{
	InitWindow(windowWidth, windowHeight, gameName.c_str());
	SetTargetFPS(gameFPS);
}

GameSettings& GameSettings::getInstance()
{
	static GameSettings instance;
	return instance;
}

void GameSettings::startLoadingMenu()
{
	GuiSetStyle(DEFAULT, TEXT_SIZE, 20);
	GuiSetStyle(BUTTON, TEXT_ALIGNMENT, TEXT_ALIGN_CENTER);
	
	// Create button style
	float buttonWidth{ 300 };
	float buttonHeight{ 50 };
	float horizontalCenterPosition{  (static_cast<float> (windowWidth) /2)-(buttonWidth/2)};
	float verticalFirstButtonPosition{ windowHeight - buttonHeight * 2 };
	Rectangle NewGameButtonShape{ horizontalCenterPosition, verticalFirstButtonPosition - 3 * buttonHeight - 3 * 25, buttonWidth, buttonHeight };
	Rectangle loadButtonShape{ horizontalCenterPosition, verticalFirstButtonPosition - 2*buttonHeight - 2*25, buttonWidth, buttonHeight };
	Rectangle saveButtonShape{ horizontalCenterPosition, verticalFirstButtonPosition - buttonHeight-25, buttonWidth, buttonHeight };
	Rectangle quitButtonShape{ horizontalCenterPosition, verticalFirstButtonPosition, buttonWidth, buttonHeight };

	GuiButton(NewGameButtonShape, GuiIconText(ICON_FILE_NEW, "New Game"));
	GuiButton(loadButtonShape, GuiIconText(ICON_FILE_OPEN, "Load Game"));
	GuiButton(saveButtonShape, GuiIconText(ICON_FILE_SAVE, "Save"));

	//TODO add logic
	if (GuiButton(quitButtonShape, GuiIconText(ICON_EXIT, "Quit")))
	{
		//test
	}

	//Load game button

	//Exit game button
}

GameSettings::GameSettings()
{
}
