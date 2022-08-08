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

void DrawTitleWithInstruction() {
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

void MainMenu(int index) {
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

void FunctionMenu(int index) {
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

void SearchMenu(int index) {
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

void ViewMenu(int index) {
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

void EditMenu(int index) {
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

void GameMenu(int index) {
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

void GuessDefinitionFromWordMenu(int OptionIndex)
{
	if (GameState == GAME_NOT_FINISHED) {
		int numAnswer = 4;

		// Chi cap nhat cac index lai khi RandomIndex == -1
		if (RandomIndex == -1) {
			AnswersIndex.clear();

			srand(time(NULL));
			RandomIndex = rand() % CurrentDict.ExistingWords.size();

			AnswersIndex.push_back(RandomIndex);

			while (AnswersIndex.size() < numAnswer) {
				int tmp = rand() % CurrentDict.ExistingWords.size();
				if (tmp != RandomIndex) {
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

		for (int i = 0; i < AnswersIndex.size(); ++i) {
			switch (i) {
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
			switch (i) {
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
	else if (GameState == GAME_WON) {
		string Announcement = "The answer is correct!";
		Print(Announcement, ConsoleWidth / 2 - Announcement.length() / 2, ConsoleHeight / 2 - 1, 14, 0);

		string BackButton = "Back";
		Print(BackButton, (ConsoleWidth / 2 - BackButton.length() / 2), ConsoleHeight / 2 + 1, 15, 2);
	}
	else if (GameState == GAME_OVER) {
		string Announcement = "The answer is incorrect!";
		Print(Announcement, ConsoleWidth / 2 - Announcement.length() / 2, ConsoleHeight / 2 - 1, 14, 0);

		string BackButton = "Back";
		Print(BackButton, (ConsoleWidth / 2 - BackButton.length() / 2), ConsoleHeight / 2 + 1, 15, 2);
	}
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
		page = FIRST_HELPER_SEARCH_FOR_KEYWORD_MENU;
	}	
	else {		
		page = SECOND_HELPER_SEARCH_FOR_KEYWORD_MENU;
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
	if (index == 1) {

	}
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

void ThirdHelperSearchForKeyWordMenu(string& KeyWord) {
	TrieNode* Cur = CurrentDict.TakeLastNode(KeyWord);
	if (Cur) {
		for (string temp : Cur->Definition) {
			AddToFavouriteList(KeyWord, temp);
			if (EnableToAdd == false) {
				string AddFail = "Favourite List reach maximum";
				Print(AddFail, (ConsoleWidth / 2 - AddFail.length() / 2), 32, 14, 0);
				return;
			}
		}
	}	
	string AddSuccess = "Added Successfully";
	Print(AddSuccess, (ConsoleWidth / 2 - AddSuccess.length() / 2), 32, 14, 0);
}

void HistoryOfSearchingMenu() {
	// in ra toi da 5 tu
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

void ViewFavouriteMenu() {
	// in ra toi da 8 tu
	int maxWord = 8;
	// in ra toi da 1 definition cho 1 tu
	int maxDef = 1;
	string s = "Your Favourite List";
	string s1 = "Word";
	string s2 = "Definition";
	string s3 = "Back";
	Print(s, (ConsoleWidth / 2 - s.length() / 2), 5, 14, 0);
	Print(s1, 10, 6, 14, 0);
	Print(s2, 55, 6, 14, 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 33, 15, 2);
	int y_start = 8;
	int countWord = 0;
	for (Favourite* temp : FavouriteList) {
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
			y_start += 2;
		}
	}
}

void AddToFavouriteMenu() {
	// in ra toi da 8 tu
	int maxWord = 8;
	// in ra toi da 1 definition cho 1 tu
	int maxDef = 1;
	string s = "Your Favourite List";
	string s1 = "Word";
	string s2 = "Definition";
	string s3 = "Back";
	Print(s, (ConsoleWidth / 2 - s.length() / 2), 5, 14, 0);
	Print(s1, 10, 6, 14, 0);
	Print(s2, 55, 6, 14, 0);
	int y_start = 8;
	int countWord = 0;
	for (Favourite* temp : FavouriteList) {
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
			PrintLongAtMost1Line(k, 40, y_start, 15, 0);
			y_start += 2;
		}
	}
	string Annouce = "Input the word you want to add: ";
	show_console_cursor(true);
	Print(Annouce, 10, 28, 14, 0);
	string Word;
	cin >> Word;
	show_console_cursor(false);
	string Result;
	// neu danh sach da full
	if (FavouriteList.size() == maxWord) {
		Result = "List is full";
		Print(Result, (ConsoleWidth / 2 - Result.length() / 2), 30, 14, 0);
		Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 35, 15, 2);
		return;
	}
	// neu word nam trong favourite List
	for (auto temp : FavouriteList) {
		if (temp->word == Word) {
			Result = "Word had been added";
			Print(Result, (ConsoleWidth / 2 - Result.length() / 2), 30, 14, 0);
			Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 35, 15, 2);
			return;
		}		
	}	
	TrieNode* Cur = CurrentDict.TakeLastNode(Word);
	if (!Cur) {
		// neu word khong ton tai
		Result = "Invalid Word";
	}
	else {
		// add thanh cong
		Result = "Added Successfully";
		for (auto temp : Cur->Definition) {
			AddToFavouriteList(Word, temp);
		}
	}
	Print(Result, (ConsoleWidth / 2 - Result.length() / 2), 30, 14, 0);
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 35, 15, 2);
}

void RemoveFromFavouriteMenu() {
	// in ra toi da 8 tu
	int maxWord = 8;
	// in ra toi da 1 definition cho 1 tu
	int maxDef = 1;
	string s = "Your Favourite List";
	string s1 = "Word";
	string s2 = "Definition";
	string s3 = "Back";
	Print(s, (ConsoleWidth / 2 - s.length() / 2), 5, 14, 0);
	Print(s1, 10, 6, 14, 0);
	Print(s2, 55, 6, 14, 0);
	int y_start = 8;
	int countWord = 0;
	for (Favourite* temp : FavouriteList) {
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
			PrintLongAtMost1Line(k, 40, y_start, 15, 0);
			y_start += 2;
		}
	}
	string Annouce = "Input the word you want to remove: ";
	show_console_cursor(true);
	Print(Annouce, 10, 25, 14, 0);
	string Word;
	cin >> Word;
	show_console_cursor(false);
	RemoveFromFavouriteList(Word);
	if (EnableToRemove == true) {
		string AnnouceSuccess = "Removed Successfully";
		Print(AnnouceSuccess, (ConsoleWidth / 2 - AnnouceSuccess.length() / 2), 30, 14, 0);
	}
	else {
		string AnnouceFail = "Removed Fail";
		Print(AnnouceFail, (ConsoleWidth / 2 - AnnouceFail.length() / 2), 30, 14, 0); 
	}
	Print(s3, (ConsoleWidth / 2 - s3.length() / 2), 35, 15, 2);
}


