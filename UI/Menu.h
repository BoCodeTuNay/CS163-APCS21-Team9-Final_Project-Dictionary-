#pragma once

#include <cstdlib>
#include <ctime>
#include "../Data/Data.h"
#include "../UI/Console.h"

// Index cua cac menu
#define MAIN_MENU 1
#define FUNCTION_MENU 2
#define SEARCH_MENU 3
#define VIEW_MENU 4
#define EDIT_MENU 5
#define GAME_MENU 6
#define VIEW_RANDOM_WORD_MENU 7
#define GUESS_DEFINITION_FROM_WORD_MENU 11
#define SEARCH_FOR_KEYWORD_MENU 8
#define FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU 9
#define SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU 10
#define THIRD_HELPER_SEARCH_FOR_KEYWORD_MENU 14
#define HISTORY_OF_SEARCHING_MENU 12
#define VIEW_FAVOURITE_MENU 13
#define ADD_TO_FAVOURITE_MENU 15
#define REMOVE_FROM_FAVOURITE_MENU 16

// Ve menu
void DrawTitle();
void DrawTitleWithInstruction();
void MainMenu(int index);
void FunctionMenu(int index);
void SearchMenu(int index);
void ViewMenu(int index);
void EditMenu(int index);
void GameMenu(int index);
void ViewRandomWordMenu();
void GuessDefinitionFromWordMenu(int OptionIndex);
void SearchForKeyWordMenu(string& KeyWord);
void FirstHelperSearchForKeyWordMenu(int index, string& KeyWord);
void SecondHelperSearchForKeyWordMenu(int index, string& KeyWord);
void ThirdHelperSearchForKeyWordMenu(string& KeyWord);
void HistoryOfSearchingMenu();
void ViewFavouriteMenu();
void AddToFavouriteMenu();