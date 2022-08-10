#include "KeyboardInput.h"

void HandleKeyInput(KEY_EVENT_RECORD key) {
	if (key.bKeyDown) {
		switch (key.wVirtualKeyCode) {
		case VK_UP: {
			switch (page) {
			case MAIN_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				MainMenu(vitri);
				break;
			}

			case FUNCTION_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				FunctionMenu(vitri);
				break;
			}

			case SEARCH_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				SearchMenu(vitri);
				break;
			}

			case VIEW_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				ViewMenu(vitri);
				break;
			}

			case EDIT_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				EditMenu(vitri);
				break;
			}

			case GAME_MENU: {
				if (vitri == 0) {
					vitri = tongvitri - 1;
				}
				else
					vitri -= 1;
				GameMenu(vitri);
				break;
			}

			case SEARCH_FOR_KEYWORD_MENU: {
				break;
			}

			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 1) {
					vitri = tongvitri - 1;
				}
				else vitri -= 1;
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
					else vitri = 0;
				}
				break;
			}

			case GUESS_WORD_FROM_DEFINITION_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
					else vitri = 0;
				}
				break;
			}
			}
			break;
		}

		case VK_DOWN: {
			switch (page) {
			case MAIN_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				MainMenu(vitri);
				break;
			}

			case FUNCTION_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				FunctionMenu(vitri);
				break;
			}

			case SEARCH_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				SearchMenu(vitri);
				break;
			}

			case VIEW_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				ViewMenu(vitri);
				break;
			}

			case EDIT_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				EditMenu(vitri);
				break;
			}

			case GAME_MENU: {
				if (vitri == tongvitri - 1) {
					vitri = 0;
				}
				else
					vitri += 1;
				GameMenu(vitri);
				break;
			}
			
			case SEARCH_FOR_KEYWORD_MENU: {
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
					else vitri = 0;
				}
				break;
			}

			case GUESS_WORD_FROM_DEFINITION_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
					else vitri = 0;
				}
				break;
			}

			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 0) vitri = 1;
				else if (vitri == tongvitri - 1) {
					vitri = 1;
				}
				else {
					vitri += 1;
				}				
				break;
			}

			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 0) vitri = 1;
				break;
			}

			case FIFTH_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 0) vitri = 1;
				break;
			}
			}
			break;
		}

		case VK_RETURN: {
			switch (page) {
			case MAIN_MENU: {
				if (vitri == 0) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 1) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = FUNCTION_MENU;
					vitri = 0;
					CurrentDict = EngToEngDict;
					Clrscr();
				}
				else if (vitri == 3) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 4) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					Clrscr();
					OutputToHistoryList();
					OutputToFavouriteList();
					exit(0);
				}
				break;
			}

			case FUNCTION_MENU: {
				if (vitri == 0) {
					page = SEARCH_MENU;
					Clrscr();
				}
				else if (vitri == 1) {
					page = VIEW_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = EDIT_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 3) {
					// ham reset origin
					Clrscr();
				}
				else if (vitri == 4) {
					page = GAME_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					page = MAIN_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case SEARCH_MENU: {
				if (vitri == 0) {
					page = SEARCH_FOR_KEYWORD_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 1) {
					// ham SEARCH FOR DEFINITION
					Clrscr();
				}
				else if (vitri == 2) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case VIEW_MENU: {
				if (vitri == 0) {
					page = HISTORY_OF_SEARCHING_MENU;
					Clrscr();
				}
				else if (vitri == 1) {
					page = VIEW_RANDOM_WORD_MENU;
					Clrscr();
				}
				else if (vitri == 2) {
					page = VIEW_FAVOURITE_MENU;
					Clrscr();
				}
				else if (vitri == 3) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case EDIT_MENU: {
				if (vitri == 0) {
					// ham ADD NEW WORD AND ITS DEFINITION
					Clrscr();
				}
				else if (vitri == 1) {
					// ham EDIT DEFINITION OF EXISTING WORD
					Clrscr();
				}
				else if (vitri == 2) {
					// ham REMOVE A WORD FROM DICTIONARY
					Clrscr();
				}
				else if (vitri == 3) {
					// ham ADD A WORD TO FAVOURITE LIST
					page = ADD_TO_FAVOURITE_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 4) {
					// ham REMOVE A WORD OF FAVOURITE LIST
					page = REMOVE_FROM_FAVOURITE_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case GAME_MENU: {
				if (vitri == 0) {
					page = GUESS_DEFINITION_FROM_WORD_MENU;
					Clrscr();
				}
				else if (vitri == 1) {
					page = GUESS_WORD_FROM_DEFINITION_MENU;
					Clrscr();
				}
				else if (vitri == 2) {
					page = FUNCTION_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == CorrectAnswer) {
						GameState = GAME_WON;
						page = GUESS_DEFINITION_FROM_WORD_MENU;
						vitri = 0;
						Clrscr();
					}
					else if (vitri == 4) {
						GameState = GAME_NOT_FINISHED;
						page = GAME_MENU;
						vitri = 0;
						RandomIndex = -1;
						Clrscr();
					}
					else {
						GameState = GAME_OVER;
						page = GUESS_DEFINITION_FROM_WORD_MENU;
						vitri = 0;
						Clrscr();
					}
				}
				else if (GameState == GAME_WON || GameState == GAME_OVER) {
					GameState = GAME_NOT_FINISHED;
					page = GAME_MENU;
					vitri = 0;
					RandomIndex = -1;
					Clrscr();
				}
				break;
			}

			case GUESS_WORD_FROM_DEFINITION_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == CorrectAnswer) {
						GameState = GAME_WON;
						page = GUESS_WORD_FROM_DEFINITION_MENU;
						vitri = 0;
						Clrscr();
					}
					else if (vitri == 4) {
						GameState = GAME_NOT_FINISHED;
						page = GAME_MENU;
						vitri = 0;
						RandomIndex = -1;
						Clrscr();
					}
					else {
						GameState = GAME_OVER;
						page = GUESS_WORD_FROM_DEFINITION_MENU;
						vitri = 0;
						Clrscr();
					}
				}
				else if (GameState == GAME_WON || GameState == GAME_OVER) {
					GameState = GAME_NOT_FINISHED;
					page = GAME_MENU;
					vitri = 0;
					RandomIndex = -1;
					Clrscr();
				}
				break;
			}

			case VIEW_RANDOM_WORD_MENU: {
				page = VIEW_MENU;
				vitri = 0;
				RandomIndex = -1;
				Clrscr();
				break;
			}
			
			case SEARCH_FOR_KEYWORD_MENU: {
				break;
			}

			case FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri != 0 && vitri < tongvitri) {
					page = FOURTH_HELPER_SEARCH_FOR_KEYWORD_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 1) {
					page = SEARCH_FOR_KEYWORD_MENU;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = SEARCH_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case FIFTH_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				if (vitri == 1) {
					page = THIRD_HELPER_SEARCH_FOR_KEYWORD_MENU;
				}
				else if (vitri == 2) {
					page = SEARCH_MENU;
					vitri = 0;
					Clrscr();
				}
				break;
			}

			case HISTORY_OF_SEARCHING_MENU: {
				page = VIEW_MENU;
				vitri = 0;
				Clrscr();
				break;
			}

			case VIEW_FAVOURITE_MENU: {
				page = VIEW_MENU;
				vitri = 0;
				Clrscr();
				break;
			}

			case ADD_TO_FAVOURITE_MENU: {
				page = EDIT_MENU;
				vitri = 0;
				Clrscr();
				break;
			}
			
			case REMOVE_FROM_FAVOURITE_MENU: {
				page = EDIT_MENU;
				vitri = 0;
				Clrscr();
				break;
			}
			}
			break;
		}

		case VK_LEFT: {
			switch (page) {
			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case FIFTH_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == 0) vitri = 3;
					else --vitri;
				}
				break;
			}

			case GUESS_WORD_FROM_DEFINITION_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					if (vitri == 0) vitri = 3;
					else --vitri;
				}
				break;
			}
			}
			break;
		}

		case VK_RIGHT: {
			switch (page) {
			case SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case FIFTH_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}

			case GUESS_DEFINITION_FROM_WORD_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					vitri = (++vitri) % 4;
				}
				break;
			}

			case GUESS_WORD_FROM_DEFINITION_MENU: {
				if (GameState == GAME_NOT_FINISHED) {
					vitri = (++vitri) % 4;
				}
				break;
			}

			case THIRD_HELPER_SEARCH_FOR_KEYWORD_MENU: {
				page = FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU;
				vitri = 2;
				break;
			}
			}
			break;
		}

		}
	}
}

void Event() {
	while (true) {
		DWORD DWNumberOfEvent = 0;
		DWORD DWNumberOfEventsRead = 0;

		HANDLE HConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
		GetNumberOfConsoleInputEvents(HConsoleInput, &DWNumberOfEvent);

		if (DWNumberOfEvent) {
			INPUT_RECORD* eventbuffer = new INPUT_RECORD[DWNumberOfEvent];
			ReadConsoleInput(HConsoleInput, eventbuffer, DWNumberOfEvent, &DWNumberOfEventsRead);

			for (DWORD i = 0; i < DWNumberOfEvent; i++) {
				if (eventbuffer[i].EventType == KEY_EVENT) {
					HandleKeyInput(eventbuffer[i].Event.KeyEvent);
				}
				if (page == MAIN_MENU) {
					DrawTitle();
					MainMenu(vitri);
				}
				else if (page == FUNCTION_MENU) {
					DrawTitleWithInstruction();
					FunctionMenu(vitri);
				}
				else if (page == SEARCH_MENU) {
					DrawTitleWithInstruction();
					SearchMenu(vitri);
				}
				else if (page == VIEW_MENU) {
					DrawTitleWithInstruction();
					ViewMenu(vitri);
				}
				else if (page == EDIT_MENU) {
					DrawTitleWithInstruction();
					EditMenu(vitri);
				}
				else if (page == GAME_MENU) {
					DrawTitleWithInstruction();
					GameMenu(vitri);
				}
				else if (page == VIEW_RANDOM_WORD_MENU) {
					DrawTitle();
					ViewRandomWordMenu();
				}
				else if (page == SEARCH_FOR_KEYWORD_MENU) {
					DrawTitle();
					SearchForKeyWordMenu(KeyWord, vitri);
				}
				else if (page == FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU) {			
					FirstHelperSearchForKeyWordMenu(vitri, KeyWord);
				}
				else if (page == SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU) {
					SecondHelperSearchForKeyWordMenu(vitri, KeyWord);
				}
				else if (page == THIRD_HELPER_SEARCH_FOR_KEYWORD_MENU) {
					ThirdHelperSearchForKeyWordMenu();
				}
				else if (page == FOURTH_HELPER_SEARCH_FOR_KEYWORD_MENU) {
					DrawTitle();
					FourthHelperSearchForKeyWordMenu();
				}
				else if (page == FIFTH_HELPER_SEARCH_FOR_KEYWORD_MENU) {
					FifthHelperSearchForKeyWordMenu(vitri);
				}
				else if (page == GUESS_DEFINITION_FROM_WORD_MENU) {
					DrawTitle();
					GuessDefinitionFromWordMenu(vitri);
				}
				else if (page == GUESS_WORD_FROM_DEFINITION_MENU) {
					DrawTitle();
					GuessWordFromDefinitionMenu(vitri);
				}
				else if (page == HISTORY_OF_SEARCHING_MENU) {
					DrawTitle();
					HistoryOfSearchingMenu();
				}
				else if (page == VIEW_FAVOURITE_MENU) {
					DrawTitle();
					ViewFavouriteMenu();
				}
				else if (page == ADD_TO_FAVOURITE_MENU) {
					DrawTitle();
					AddToFavouriteMenu();
				}
				else if (page == REMOVE_FROM_FAVOURITE_MENU) {
					DrawTitle();
					RemoveFromFavouriteMenu();
				}
			}
		}
	}

}