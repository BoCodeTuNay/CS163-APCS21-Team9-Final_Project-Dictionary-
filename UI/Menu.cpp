#include "Menu.h"

// Ve menu
void Menuchung() {
	int i;
	for (i = 0; i < ConsoleWidth; i++) {
		cout << "-";
	}
	cout << endl;
	string a;
	a = "DICTIONARY";
	ToMau(35, 2, a, 5);
	cout << endl;
	int j;
	for (j = 0; j < ConsoleWidth; j++) {
		cout << "-";
	}
}
void MenuHelper2() {
	int i;
	for (i = 0; i < ConsoleWidth; i++) {
		cout << "-";
	}
	cout << endl;
	string a;
	a = "DICTIONARY";
	ToMau(35, 2, a, 5);
	cout << endl;
	int j;
	for (j = 0; j < ConsoleWidth; j++) {
		cout << "-";
	}
	cout << endl;
	string b = "YOU WANT TO?";
	ToMau(34, 4, b, 14);
}
void Menu1(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, flag6 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	if (index == 4) flag5 = true;
	if (index == 5) flag6 = true;
	s1 = "EMOJI";
	s2 = "SLANG WORD";
	s3 = "ENGLISH TO ENGLISH";
	s4 = "ENGLISH TO VIETNAMESE";
	s5 = "VIETNAMESE TO ENGLISH";
	s6 = "EXIT";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	LPSTR copy5 = const_cast<char*>(s5.c_str());
	LPSTR copy6 = const_cast<char*>(s6.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
	setColorBGTextXY(flag5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0, copy5);
	setColorBGTextXY(flag6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0, copy6);
}
void Menu2(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, flag6 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	if (index == 4) flag5 = true;
	if (index == 5) flag6 = true;
	s1 = "SEARCH";
	s2 = "VIEW";
	s3 = "ADD/REMOVE/EDIT";
	s4 = "RESET ORIGIN";
	s5 = "TEST VOCABULARY";
	s6 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	LPSTR copy5 = const_cast<char*>(s5.c_str());
	LPSTR copy6 = const_cast<char*>(s6.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
	setColorBGTextXY(flag5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0, copy5);
	setColorBGTextXY(flag6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0, copy6);
}
void Menu3(int index) {
	vitri = index;
	tongvitri = 3;
	string s1, s2, s3;
	bool flag1 = false, flag2 = false, flag3 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	s1 = "SEARCH FOR KEYWORD";
	s2 = "SEARCH FOR DEFINITION";
	s3 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
}
void Menu4(int index) {
	vitri = index;
	tongvitri = 4;
	string s1, s2, s3, s4;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	s1 = "VIEW HISTORY OF SEARCHING";
	s2 = "VIEW RANDOM WORD";
	s3 = "VIEW FAVOURITE LIST";
	s4 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
}
void Menu5(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, flag6 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	if (index == 4) flag5 = true;
	if (index == 5) flag6 = true;
	s1 = "ADD NEW WORD AND ITS DEFINITION";
	s2 = "EDIT DEFINITION OF EXISTING WORD";
	s3 = "REMOVE A WORD FROM DICTIONARY";
	s4 = "ADD A WORD TO FAVOURITE LIST";
	s5 = "REMOVE A WORD OF FAVAVOURITE LIST";
	s6 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	LPSTR copy5 = const_cast<char*>(s5.c_str());
	LPSTR copy6 = const_cast<char*>(s6.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
	setColorBGTextXY(flag5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0, copy5);
	setColorBGTextXY(flag6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0, copy6);
}
void Menu6(int index) {
	vitri = index;
	tongvitri = 3;
	string s1, s2, s3;
	bool flag1 = false, flag2 = false, flag3 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	s1 = "GUESS DEFINITION FROM WORDS";
	s2 = "GUESS WORD FROM DEFINITIONS";
	s3 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
}

void Menu7() {/*
	vitri = index;
	tongvitri = 4;
	string s1, s2, s3, s4;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;*/

	srand(time(NULL));
	int index = rand() % EmojiDict.ExistingWords.size();

	string LineStr = "The randomly picked word is: ";
	string WordStr = string("Word: ") + EmojiDict.ExistingWords[index]->Word;
	string DefStr = string("Definition: ") + EmojiDict.ExistingWords[index]->Definition;

	LPSTR Line = const_cast<char*>(LineStr.c_str());
	LPSTR Word = const_cast<char*>(WordStr.c_str());
	LPSTR Definition = const_cast<char*>(DefStr.c_str());
	setColorBGTextXY(false, 10, 15, 15, 0, Line);
	setColorBGTextXY(false, 10, 17, 15, 0, Word);
	setColorBGTextXY(false, 10, 19, 15, 0, Definition);
}

void xuliphim(KEY_EVENT_RECORD key) {
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
				}
				else if (vitri == 5) {
					exit(0);
				}
				break;
			case 2:
				if (vitri == 0) {
					page = 3;
				}
				else if (vitri == 1) {
					page = 4;
					vitri = 0;
				}
				else if (vitri == 2) {
					page = 5;
					vitri = 0;
				}
				else if (vitri == 3) {
					// ham reset origin

				}
				else if (vitri == 4) {
					page = 6;
					vitri = 0;
				}
				else if (vitri == 5) {
					page = 1;
					vitri = 0;
				}
				break;
			case 3:
				if (vitri == 0) {
					// ham SEARCH FOR KEYWORD
				}
				else if (vitri == 1) {
					// ham SEARCH FOR DEFINITION
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
				}
				break;
			case 4:
				if (vitri == 0) {
					// ham VIEW HISTORY OF SEARCHING

				}
				else if (vitri == 1) {
					// ham VIEW RANDOM WORD
					page = 7;
				}
				else if (vitri == 2) {
					// ham VIEW FAVOURITE LIST

				}
				else if (vitri == 3) {
					page = 2;
					vitri = 0;
				}
				break;
			case 5:
				if (vitri == 0) {
					// ham ADD NEW WORD AND ITS DEFINITION

				}
				else if (vitri == 1) {
					// ham EDIT DEFINITION OF EXISTING WORD
				}
				else if (vitri == 2) {
					// ham REMOVE A WORD FROM DICTIONARY
				}
				else if (vitri == 3) {
					// ham ADD A WORD TO FAVOURITE LIST

				}
				else if (vitri == 4) {
					// ham REMOVE A WORD OF FAVAVOURITE LIST
				}
				else if (vitri == 5) {
					page = 2;
					vitri = 0;
				}
				break;
			case 6:
				if (vitri == 0) {
					// ham GUESS DEFINITION FROM WORDS

				}
				else if (vitri == 1) {
					// GUESS WORD FROM DEFINITIONS
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
				}
				break;
			}

			break;
		}

	}
}
void xulisukien() {
	while (true) {
		DWORD DWNumberOfEvent = 0;
		DWORD DWNumberOfEventsRead = 0;

		HANDLE HConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
		GetNumberOfConsoleInputEvents(HConsoleInput, &DWNumberOfEvent);

		if (DWNumberOfEvent) {
			INPUT_RECORD* eventbuffer = new INPUT_RECORD[DWNumberOfEvent];
			ReadConsoleInput(HConsoleInput, eventbuffer, DWNumberOfEvent, &DWNumberOfEventsRead);

			for (DWORD i = 0; i < DWNumberOfEvent; i++) {
				if (page == 1) {
					system("cls");
					Menuchung();
					Menu1(vitri);
				}
				else if (page == 2) {
					system("cls");
					MenuHelper2();
					Menu2(vitri);
				}
				else if (page == 3) {
					system("cls");
					MenuHelper2();
					Menu3(vitri);
				}
				else if (page == 4) {
					system("cls");
					MenuHelper2();
					Menu4(vitri);
				}
				else if (page == 5) {
					system("cls");
					MenuHelper2();
					Menu5(vitri);
				}
				else if (page == 6) {
					system("cls");
					MenuHelper2();
					Menu6(vitri);
				}
				else if (page == 7) {
					system("cls");
					Menuchung();
					Menu7();
				}
				if (eventbuffer[i].EventType == KEY_EVENT) {
					xuliphim(eventbuffer[i].Event.KeyEvent);
				}
			}
		}
	}
}