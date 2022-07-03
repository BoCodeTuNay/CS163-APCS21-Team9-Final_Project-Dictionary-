#include "Menu.h"

// Ve menu
void Menuchung() {
	for (int i = 0; i < ConsoleWidth; i++) {
		Print("-", i, 0, 15, 0);
	}

	string AppName = "DICTIONARY";
	Print(AppName, ConsoleWidth / 2 - AppName.length() / 2, 2, 14, 0);
	
	for (int i = 0; i < ConsoleWidth; i++) {
		Print("-", i, 4, 15, 0);
	}
}
void MenuHelper2() {
	for (int i = 0; i < ConsoleWidth; i++) {
		Print("-", i, 0, 15, 0);
	}

	string AppName = "DICTIONARY";
	Print(AppName, ConsoleWidth / 2 - AppName.length() / 2, 2, 14, 0);

	for (int i = 0; i < ConsoleWidth; i++) {
		Print("-", i, 4, 15, 0);
	}

	string Instruction = "YOU WANT TO?";
	Print(Instruction, ConsoleWidth / 2 - Instruction.length() / 2, 5, 14, 0);
}
void Menu1(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	s1 = "EMOJI";
	s2 = "SLANG WORD";
	s3 = "ENGLISH TO ENGLISH";
	s4 = "ENGLISH TO VIETNAMESE";
	s5 = "VIETNAMESE TO ENGLISH";
	s6 = "EXIT";
	Print(s1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0);
	Print(s2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0);
	Print(s4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0);
	Print(s5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0);
	Print(s6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0);
}
void Menu2(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	s1 = "SEARCH";
	s2 = "VIEW";
	s3 = "ADD/REMOVE/EDIT";
	s4 = "RESET ORIGIN";
	s5 = "TEST VOCABULARY";
	s6 = "BACK";
	Print(s1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0);
	Print(s2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0);
	Print(s4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0);
	Print(s5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0);
	Print(s6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0);
}
void Menu3(int index) {
	vitri = index;
	tongvitri = 3;
	string s1, s2, s3;
	s1 = "SEARCH FOR KEYWORD";
	s2 = "SEARCH FOR DEFINITION";
	s3 = "BACK";
	Print(s1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0);
	Print(s2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0);
}
void Menu4(int index) {
	vitri = index;
	tongvitri = 4;
	string s1, s2, s3, s4;
	s1 = "VIEW HISTORY OF SEARCHING";
	s2 = "VIEW RANDOM WORD";
	s3 = "VIEW FAVOURITE LIST";
	s4 = "BACK";
	Print(s1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0);
	Print(s2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0);
	Print(s4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0);
}
void Menu5(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	s1 = "ADD NEW WORD AND ITS DEFINITION";
	s2 = "EDIT DEFINITION OF EXISTING WORD";
	s3 = "REMOVE A WORD FROM DICTIONARY";
	s4 = "ADD A WORD TO FAVOURITE LIST";
	s5 = "REMOVE A WORD OF FAVOURITE LIST";
	s6 = "BACK";
	Print(s1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0);
	Print(s2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0);
	Print(s4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0);
	Print(s5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0);
	Print(s6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0);
}
void Menu6(int index) {
	vitri = index;
	tongvitri = 3;
	string s1, s2, s3;
	s1 = "GUESS DEFINITION FROM WORDS";
	s2 = "GUESS WORD FROM DEFINITIONS";
	s3 = "BACK";
	Print(s1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0);
	Print(s2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0);
}

void Menu7() {
	// Chi cap nhat menu7 lai khi IsRandomValid == true
	if (IsRandomValid)
	{
		IsRandomValid = false;
		srand(time(NULL));
		int index = rand() % EmojiDict.ExistingWords.size();

		string Instruction = "The randomly picked word is: ";
		string Word = string("Word: ") + EmojiDict.ExistingWords[index]->Word;
		string Definition = string("Definition: ") + EmojiDict.ExistingWords[index]->Definition;
		string BackButton = "Back";

		Print(Instruction, 10, 15, 14, 0);
		Print(Word, 10, 17, 15, 0);
		PrintLong(Definition, 10, 19, 15, 0);
		Print(BackButton, (ConsoleWidth / 2 - BackButton.length() / 2), 29, 15, 2);
	}
}

void HandleKeyInput(KEY_EVENT_RECORD key) {
	if (key.bKeyDown) {
		switch (key.wVirtualKeyCode) {
		case VK_UP:
			switch (page) {
			case 1:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu1(vitri);
				}
				break;
			case 2:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu2(vitri);
				}
				break;
			case 3:
				if (tongvitri == 3) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu3(vitri);
				}
				break;
			case 4:
				if (tongvitri == 4) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu4(vitri);
				}
				break;
			case 5:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu5(vitri);
				}
				break;
			case 6:
				if (tongvitri == 3) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu6(vitri);
				}
				break;
			}

			break;
		case VK_DOWN:
			switch (page) {
			case 1:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu1(vitri);
				}
				break;
			case 2:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu2(vitri);
				}
				break;
			case 3:
				if (tongvitri == 3) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu3(vitri);
				}
				break;
			case 4:
				if (tongvitri == 4) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu4(vitri);
				}
				break;
			case 5:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu5(vitri);
				}
				break;
			case 6:
				if (tongvitri == 3) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu6(vitri);
				}
				break;
			}
			break;
		case VK_RETURN:
			switch (page) {
			case 1:
				if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3 || vitri == 4) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					Clrscr();
					exit(0);
				}
				break;
			case 2:
				if (vitri == 0) {
					page = 3;
					Clrscr();
				}
				else if (vitri == 1) {
					page = 4;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = 5;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 3) {
					// ham reset origin
					Clrscr();
				}
				else if (vitri == 4) {
					page = 6;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					page = 1;
					vitri = 0;
					Clrscr();
				}
				break;
			case 3:
				if (vitri == 0) {
					// ham SEARCH FOR KEYWORD
					Clrscr();
				}
				else if (vitri == 1) {
					// ham SEARCH FOR DEFINITION
					Clrscr();
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				break;
			case 4:
				if (vitri == 0) {
					// ham VIEW HISTORY OF SEARCHING
					Clrscr();
				}
				else if (vitri == 1) {
					// ham VIEW RANDOM WORD
					page = 7;
					Clrscr();
				}
				else if (vitri == 2) {
					// ham VIEW FAVOURITE LIST
					Clrscr();
				}
				else if (vitri == 3) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				break;
			case 5:
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
					Clrscr();
				}
				else if (vitri == 4) {
					// ham REMOVE A WORD OF FAVOURITE LIST
					Clrscr();
				}
				else if (vitri == 5) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				break;
			case 6:
				if (vitri == 0) {
					// ham GUESS DEFINITION FROM WORDS
					Clrscr();
				}
				else if (vitri == 1) {
					// GUESS WORD FROM DEFINITIONS
					Clrscr();
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				break;

			case 7:
				page = 4;
				vitri = 0;
				IsRandomValid = true;
				Clrscr();
				break;
			}
			break;
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
				if (page == 1) {
					Menuchung();
					Menu1(vitri);
				}
				else if (page == 2) {
					MenuHelper2();
					Menu2(vitri);
				}
				else if (page == 3) {
					MenuHelper2();
					Menu3(vitri);
				}
				else if (page == 4) {
					MenuHelper2();
					Menu4(vitri);
				}
				else if (page == 5) {
					MenuHelper2();
					Menu5(vitri);
				}
				else if (page == 6) {
					MenuHelper2();
					Menu6(vitri);
				}
				else if (page == 7) {
					Menuchung();
					Menu7();
				}
			}
		}
	}
}