#include "Menu.h"

/*
Note ve thu tu Menu:

ViewRandomWordMenu: Random word
Menu 8,9,10: Search for keyword (cua Menu3)
*/

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

void ViewRandomWordMenu() {
	// Chi cap nhat ViewRandomWordMenu lai khi RandomIndex == -1
	if (RandomIndex == -1)
	{
		srand(time(NULL));
		RandomIndex = rand() % CurrentDict.ExistingWords.size();

		string Instruction = "The randomly picked word is: ";
		string WordAnnounce = "Word: "; 
		string Word = CurrentDict.ExistingWords[RandomIndex]->Word;
		string DefAnnounce = "Definition: ";
		string BackButton = "Back";

		Print(Instruction, 10, 10, 14, 0);
		Print(WordAnnounce, 10, 12, 14, 0);
		Print(Word, 16, 12, 15, 0);
		Print(DefAnnounce, 10, 14, 14, 0);
		int y_start = 14;
		for (auto k : CurrentDict.ExistingWords[RandomIndex]->Definition) {
			PrintLong(k, 22, y_start, 15, 0);
			y_start += 2;
		}
		Print(BackButton, (ConsoleWidth / 2 - BackButton.length() / 2), y_start, 15, 2);
	}
}

void GuessDefinitionFromWordMenu()
{

}

void Menu8(string& KeyWord) {
	int i = 0;	
	string s1 = "The keyword you want to search: ";
	Print(s1, 10, 8, 14, 0);
	cin >> KeyWord;
	TrieNode* cur = CurrentDict.Root;	
	for (i; i < KeyWord.length(); i++) {
		char c = KeyWord[i];
		int cNum = int(c);		
		if (!cur->NextNode[cNum]) break;
		if (cur->NextNode[cNum] != NULL) {
			cur = cur->NextNode[cNum];
		}
	}
	int y_start = 10;
	string s2 = "Definition: ";

	// count de dem so definition duoc in ra cua tu do
	int count = 0;

	if (i == KeyWord.length() && !cur->Definition.empty()) {
		Print(s2, 10, 10, 14, 0);	
		for (auto k : cur->Definition) {
			AddToHistoryList(cur->Word, k);
			count++;
			if (count == 6) break;
			PrintLongAtMost2Line(k, 22, y_start, 15, 0);
			y_start += 2;
		}
		page = 9;
	}	
	else {		
		page = 10;
	}
}

void Menu9(int index, string& KeyWord) {
	vitri = index;
	string Announce = "Successfully";
	string AddToFav = "Add to favourite list";
	string BackButton = "Back";
	Print(Announce, (ConsoleWidth / 2 - Announce.length() / 2), 29, 14, (index == 0) ? 12 : 0);
	Print(AddToFav, 10, 31, 15, (index == 1) ? 2 : 0);
	Print(BackButton, 66, 31, 15, (index == 2) ? 2 : 0);
}

void Menu10(int index, string& KeyWord) {
	vitri = index;
	KeyWord = "";
	string Announce = "Invalid Word";
	string SearchAgain = "Search again";
	string BackButton = "Back";	
	Print(Announce, (ConsoleWidth / 2 - Announce.length() / 2), 29, 14, (index == 0) ? 12 : 0);
	Print(SearchAgain, 10, 31, 15, (index == 1) ? 2 : 0);
	Print(BackButton, 66, 31, 15, (index == 2) ? 2 : 0);
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
			case 9:
				if (vitri == 0) vitri = 1;
				break;
			case 10:
				if (vitri == 0) vitri = 1;
				break;
			}
			break;
		case VK_RETURN:
			switch (page) {
			case 1:
				if (vitri == 0) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 1) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
					CurrentDict = EngToEngDict;
					Clrscr();
				}
				else if (vitri == 3) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 4) {
					page = 2;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 5) {
					OutputToHistoryList();
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
					page = 8;
					vitri = 0;
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
				RandomIndex = -1;
				Clrscr();
				break;
			case 9:
				if (vitri == 2) {
					page = 3;
					vitri = 0;
					Clrscr();
				}
				break;
			case 10:
				if (vitri == 1) {
					page = 8;
					vitri = 0;
					Clrscr();
				}
				else if (vitri == 2) {
					page = 3;
					vitri = 0;
					Clrscr();
				}
				break;
			}			
			break;
		case VK_LEFT:
			switch (page) {
			case 9:
				vitri = (vitri == 1) ? 2 : 1;
				break;
			case 10:
				vitri = (vitri == 1) ? 2 : 1;
				break;
			}			
			break;
		case VK_RIGHT:
			switch (page) {
			case 9:
				vitri = (vitri == 1) ? 2 : 1;
				break;
			case 10:
				vitri = (vitri == 1) ? 2 : 1;
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
					ViewRandomWordMenu();
				}
				else if (page == 8) {
					Menuchung();
					Menu8(KeyWord);				
				}
				else if (page == 9) {
					Menu9(vitri, KeyWord);
				}
				else if (page == 10) {
					Menu10(vitri, KeyWord);
				}
			}
		}
	}

}