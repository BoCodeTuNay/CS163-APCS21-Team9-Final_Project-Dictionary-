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
int GameState = 2;

//string Keyword để search for keyword
string KeyWord;


void LoadEmojiData()
{
	// Tam thoi test voi emoji database duoc format lai, se thay doi sau khi tat ca cac db duoc format lai
	ifstream input("../Database/emotional_smaller_size_reformated.txt");

	while (!input.eof())
	{
		string Word, Definition;
		getline(input, Word, '\n');
		getline(input, Definition, '\n');

		EmojiDict.AddToTrie(Word, Definition);
	}

	input.close();
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
