// FactoryClicker.cpp : This file contains the 'main' function. This is a game made with Raylib
// This game is a classical Cookie Clicker game where the player construct a car factory
//

#include <iostream>
//Needed once for using RAYGUI
#define RAYGUI_IMPLEMENTATION
#include "GameSettings.h"



int main()
{
    GameSettings& gameSettings{ GameSettings::getInstance() };
    gameSettings.createWindow();


    //Run game until window is closed
    while (!WindowShouldClose())
    {
        BeginDrawing();
        gameSettings.startLoadingMenu();
        ClearBackground(DARKGRAY);
        EndDrawing();
    }
}
