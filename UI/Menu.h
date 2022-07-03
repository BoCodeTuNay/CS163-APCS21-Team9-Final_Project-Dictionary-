#pragma once

#include <cstdlib>
#include <ctime>
#include "../Data/Data.h"
#include "../UI/Console.h"

// Ve menu
void Menuchung();
void MenuHelper2();
void Menu1(int index);
void Menu2(int index);
void Menu3(int index);
void Menu4(int index);
void Menu5(int index);
void Menu6(int index);
void Menu7();

// Xu li su kien ban phim
void HandleKeyInput(KEY_EVENT_RECORD key);
void Event();
