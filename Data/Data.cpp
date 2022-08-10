#include "Data.h"

Trie CurrentDict;
Trie EmojiDict;
Trie SlangDict;
Trie EngToEngDict;
Trie EngToVietDict;
Trie VietToEngDict;

// Cac bien phuc vu cho chuc nang random
int RandomIndex = -1;
vector<int>AnswersIndex;
int GameState = GAME_NOT_FINISHED;
int CorrectAnswer = -1;

//string Keyword để search for keyword
string KeyWord;

//string SuggestWord 
string SuggestWord;

void LoadEmojiData()
{
	ifstream fin;
	fin.open("../Database/emotional.txt");
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		stringstream s(temp);
		bool flag = false;
		string a, b;
		string d;
		while (getline(s, d, ' ')) {
			if (d[0] == '`') {
				flag = true;
			}
			if (!flag) {
				a += d;
				a += ' ';
			}
			if (flag) {
				b += d;
				b += ' ';
			}
		}
		b.erase(0, 1);
		a.erase(a.length() - 1, 1);
		b.erase(b.length() - 1, 1);
		EmojiDict.AddToTrie(a, b);
	}
	fin.close();
}

void LoadEngToEngData() {
	ifstream fin;
	fin.open("../Database/Anh Anh 1.txt");
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		stringstream s(temp);
		bool flag = false;
		string a, b;
		string d;
		while (getline(s, d, ' ')) {
			if (d[0] == '`') {
				flag = true;
			}
			if (!flag) {
				a += d;
				a += ' ';
			}
			if (flag) {
				b += d;
				b += ' ';
			}
		}
		b.erase(0, 1);
		a.erase(a.length() - 1, 1);
		b.erase(b.length() - 1, 1);
		EngToEngDict.AddToTrie(a, b);
	}
	fin.close();
}