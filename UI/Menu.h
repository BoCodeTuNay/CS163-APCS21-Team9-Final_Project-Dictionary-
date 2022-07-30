#pragma once

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

// Xu li su kien ban phim
void HandleKeyInput(KEY_EVENT_RECORD key);
void Event();
