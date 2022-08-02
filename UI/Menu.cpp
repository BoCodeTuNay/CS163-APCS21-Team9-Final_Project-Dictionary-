#include "Menu.h"

// Ve menu
void DrawTitle() {
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

void DrawMenu(int index) {
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

void DrawFuncMenu(int index) {
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

void DrawSearchMenu(int index) {
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

void DrawViewMenu(int index) {
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

void DrawEditMenu(int index) {
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

void DrawGameMenu(int index) {
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

// Page Index = 7
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

		// Chi in ra 3 definition cua 1 tu
		int numDefinition = 3;
		vector<string>Definition = CurrentDict.ExistingWords[RandomIndex]->Definition;
		for (int i = 0; i < numDefinition && i < Definition.size(); ++i) {
			string SingleDef = Definition[i];
			PrintLong(SingleDef, 22, y_start, 15, 0);
			y_start += 2;
		}

		Print(BackButton, (ConsoleWidth / 2 - BackButton.length() / 2), y_start, 15, 2);
	}
}


// Page Index = 11
void GuessDefinitionFromWordMenu(int OptionIndex)
{
	tongvitri = 5;

	int numAnswer = 4;

	// Chi cap nhat cac index lai khi RandomIndex == -1
	if (RandomIndex == -1)
	{
		AnswersIndex.clear();

		srand(time(NULL));
		RandomIndex = rand() % CurrentDict.ExistingWords.size();

		AnswersIndex.push_back(RandomIndex);

		while (AnswersIndex.size() < numAnswer)
		{
			int tmp = rand() % CurrentDict.ExistingWords.size();
			if (tmp != RandomIndex)
			{
				AnswersIndex.push_back(tmp);
			}
		}
	}

	string Instruction = "Choose the correct definition for: ";
	string Word = CurrentDict.ExistingWords[RandomIndex]->Word;

	int y_start = 10;

	Print(Instruction, 10, y_start, 14, 0);
	Print(Word, 45, y_start, 15, 0);
	y_start += 2;

	for (int i = 0; i < AnswersIndex.size(); ++i)
	{
		switch (i)
		{
		case 0:
			Print("A. ", 10, y_start, 14, 0);
			break;
		case 1:
			Print("B. ", 10, y_start, 14, 0);
			break;
		case 2:
			Print("C. ", 10, y_start, 14, 0);
			break;
		case 3:
			Print("D. ", 10, y_start, 14, 0);
			break;
		default:
			break;
		}

		// Chi in ra definition dau tien cua 1 tu
		string SingleDef = CurrentDict.ExistingWords[AnswersIndex[i]]->Definition[0];
		PrintLong(SingleDef, 13, y_start, 15, 0);
		y_start += 2;
	}

	for (int i = 0; i < numAnswer; ++i) {
		switch (i)
		{
		case 0:
			Print("A", 10, y_start, 14, (OptionIndex == 0) ? 2 : 0);
			break;
		case 1:
			Print("B", 30, y_start, 14, (OptionIndex == 1) ? 2 : 0);
			break;
		case 2:
			Print("C", 50, y_start, 14, (OptionIndex == 2) ? 2 : 0);
			break;
		case 3:
			Print("D", 70, y_start, 14, (OptionIndex == 3) ? 2 : 0);
			break;
		default:
			break;
		}
	}

	string BackButton = "Back";
	Print(BackButton, (ConsoleWidth / 2 - BackButton.length() / 2), y_start + 2, 15, (OptionIndex == 4) ? 2 : 0);
}

void SearchForKeyWordMenu(string& KeyWord) {
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

void FirstHelperSearchForKeyWordMenu(int index, string& KeyWord) {
	vitri = index;
	string Announce = "Successfully";
	string AddToFav = "Add to favourite list";
	string BackButton = "Back";
	Print(Announce, (ConsoleWidth / 2 - Announce.length() / 2), 29, 14, (index == 0) ? 12 : 0);
	Print(AddToFav, 10, 31, 15, (index == 1) ? 2 : 0);
	Print(BackButton, 66, 31, 15, (index == 2) ? 2 : 0);
}

void SecondHelperSearchForKeyWordMenu(int index, string& KeyWord) {
	vitri = index;
	KeyWord = "";
	string Announce = "Invalid Word";
	string SearchAgain = "Search again";
	string BackButton = "Back";	
	Print(Announce, (ConsoleWidth / 2 - Announce.length() / 2), 29, 14, (index == 0) ? 12 : 0);
	Print(SearchAgain, 10, 31, 15, (index == 1) ? 2 : 0);
	Print(BackButton, 66, 31, 15, (index == 2) ? 2 : 0);
}

// Page index = 12
void HistoryOfSearchingMenu() {
	// in ra toi da 4 tu
	int maxWord = 5;
	// in ra toi da 2 definition cho 1 tu
	int maxDef = 2;
	string s = "Your Searching History";
	string s1 = "Word";
	string s2 = "Definition";
	string s3 = "Back";
	Print(s, (ConsoleWidth / 2 - s.length() / 2), 5, 14, 0);
	Print(s1, 10, 6, 14, 0);
	Print(s2, 55, 6, 14, 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 33, 15, 2);
	int y_start = 8;
	int countWord = 0;
	for (History* temp : HistoryList) {
		countWord++;
		if (countWord > maxWord) break;
		string a = temp->word;
		vector<string> b = temp->Definition;	
		int countDef = 0;
		PrintLongForWord(a, 10, y_start, 15, 0);
		for (auto k : b) {
			countDef++;
			if (countDef > maxDef) break;
			Print("-", 38, y_start, 15, 0);
			PrintLongAtMost2Line(k, 40, y_start, 15, 0);
			y_start++;
		}
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
					DrawMenu(vitri);
				}
				break;
			case 2:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					DrawFuncMenu(vitri);
				}
				break;
			case 3:
				if (tongvitri == 3) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					DrawSearchMenu(vitri);
				}
				break;
			case 4:
				if (tongvitri == 4) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					DrawViewMenu(vitri);
				}
				break;
			case 5:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					DrawEditMenu(vitri);
				}
				break;
			case 6:
				if (tongvitri == 3) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					DrawGameMenu(vitri);
				}
				break;
				
			// tongvitri == 5
			case 11:
				if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
				else vitri = 0;
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
					DrawMenu(vitri);
				}
				break;
			case 2:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					DrawFuncMenu(vitri);
				}
				break;
			case 3:
				if (tongvitri == 3) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					DrawSearchMenu(vitri);
				}
				break;
			case 4:
				if (tongvitri == 4) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					DrawViewMenu(vitri);
				}
				break;
			case 5:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					DrawEditMenu(vitri);
				}
				break;
			case 6:
				if (tongvitri == 3) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					DrawGameMenu(vitri);
				}
				break;
			case 9:
				if (vitri == 0) vitri = 1;
				break;
			case 10:
				if (vitri == 0) vitri = 1;
				break;

			// tongvitri == 5
			case 11:
				if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3) vitri = 4;
				else vitri = 0;
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
					page = 12;
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
					page = 11;
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
			case 11:
				if (vitri == 0) {
					page = 11;
					vitri = 0;
				}
				else if (vitri == 1) {
					page = 11;
					vitri = 0;
				}
				else if (vitri == 2) {
					page = 11;
					vitri = 0;
				}
				else if (vitri == 3) {
					page = 11;
					vitri = 0;
				}
				if (vitri == 4) {
					page = 6;
					vitri = 0;
					RandomIndex = -1;
					Clrscr();
				}
				break;
			case 12:
				page = 4;
				vitri = 0;
				Clrscr();
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

			// Tong cac button tren hang la 4
			case 11:
				if (vitri == 0) vitri = 3;
				else --vitri;
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

			// Tong cac button tren hang la 4
			case 11:
				vitri = (++vitri) % 4;
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
					DrawTitle();
					DrawMenu(vitri);
				}
				else if (page == 2) {
					MenuHelper2();
					DrawFuncMenu(vitri);
				}
				else if (page == 3) {
					MenuHelper2();
					DrawSearchMenu(vitri);
				}
				else if (page == 4) {
					MenuHelper2();
					DrawViewMenu(vitri);
				}
				else if (page == 5) {
					MenuHelper2();
					DrawEditMenu(vitri);
				}
				else if (page == 6) {
					MenuHelper2();
					DrawGameMenu(vitri);
				}
				else if (page == 7) {
					DrawTitle();
					ViewRandomWordMenu();
				}
				else if (page == 8) {
					DrawTitle();
					SearchForKeyWordMenu(KeyWord);
				}
				else if (page == 9) {
					FirstHelperSearchForKeyWordMenu(vitri, KeyWord);
				}
				else if (page == 10) {
					SecondHelperSearchForKeyWordMenu(vitri, KeyWord);
				}
				else if (page == 11) {
					DrawTitle();
					GuessDefinitionFromWordMenu(vitri);
				}
				else if (page == 12) {
					DrawTitle();
					HistoryOfSearchingMenu();
				}
			}
		}
	}

}