﻿#pragma once

#include <cstdlib>
#include <ctime>
#include "../Data/Data.h"
#include "../UI/Console.h"

// Ve menu
void DrawTitle();
void MenuHelper2();
void DrawMenu(int index);
void DrawFuncMenu(int index);s
void DrawSearchMenu(int index);
void DrawViewMenu(int index);
void DrawEditMenu(int index);
void DrawGameMenu(int index);
void DrawRandMenu();
void Menu1(int index);
void Menu2(int index);
void Menu3(int index);
void Menu4(int index);
void Menu5(int index);
void Menu6(int index);
void ViewRandomWordMenu();
void GuessDefinitionFromWordMenu(int OptionIndex);
void Menu8(string& KeyWord);
void Menu9(int index, string& KeyWord);
void Menu10(int index, string& KeyWord);

// Xu li su kien ban phim
void HandleKeyInput(KEY_EVENT_RECORD key);
void Event();
