#include "Data.h"

Trie CurrentDict;
Trie CurrentDictDef;
Trie EmojiDict;
Trie SlangDict;
Trie EngToEngDict;
Trie EngToVietDict;
Trie VietToEngDict;
Trie EmojiDefDict;
Trie SlangDefDict;
Trie EngToEngDefDict;
Trie EngToVietDefDict;
Trie VietToEngDefDict;

// MenuName de xac dinh vi tri cua CurrentDict
string MenuName;

// Cac bien phuc vu cho chuc nang random
int RandomIndex = -1;
vector<int>AnswersIndex;
int GameState = GAME_NOT_FINISHED;
int CorrectAnswer = -1;

//string Keyword để search for keyword
string KeyWord;

//string SuggestWord 
string SuggestWord;

//string KeyDef de search for Def
string KeyDef;

void LoadEmojiData()
{
	ifstream fin;
	fin.open("../Database/emotional.txt");
	fin.seekg(0, ios::beg);
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		if (temp.size() == 0) return;
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
		EmojiDefDict.AddToTrieDef(b, a);
	}
	fin.close();
}

void LoadEngToEngData() {
	ifstream fin;
	fin.open("../Database/Anh Anh.txt");
	fin.seekg(0, ios::beg);
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		if (temp.size() == 0) return;
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
		EngToEngDefDict.AddToTrieDef(b, a);
	}
	fin.close();
}

void LoadSlangData() {
	ifstream fin;
	fin.open("../Database/slang.txt");
	fin.seekg(0, ios::beg);
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		if (temp.size() == 0) return;
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
		SlangDict.AddToTrie(a, b);
		SlangDefDict.AddToTrie(b, a);
	}
	fin.close();
}

void LoadVietToEngData() {
	ifstream fin;
	fin.open("../Database/Viet Anh.txt");
	fin.seekg(0, ios::beg);
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		if (temp.size() == 0) return;
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
		VietToEngDict.AddToTrie(a, b);
	}
	fin.close();
}

void LoadEngToVietData() {
	ifstream fin;
	fin.open("../Database/Anh Viet.txt");
	fin.seekg(0, ios::beg);
	string temp;
	while (!fin.eof()) {
		getline(fin, temp, '\n');
		if (temp.size() == 0) return;
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
		EngToVietDict.AddToTrie(a, b);
	}
	fin.close();
}

void OutputEmojiData() {
	ofstream fout;
	fout.open("../Database/emotional.txt");
	HelperOutputData(fout, EmojiDict.Root);
	fout.close();
}

void OutputSlangData() {
	ofstream fout;
	fout.open("../Database/slang.txt");
	HelperOutputData(fout, SlangDict.Root);
	fout.close();
}

void OutputEngToEngData() {
	ofstream fout;
	fout.open("../Database/Anh Anh.txt");
	HelperOutputData(fout, EngToEngDict.Root);
	fout.close();
}

void OutputEngToVietData() {
	ofstream fout;
	fout.open("../Database/Anh Viet.txt");
	HelperOutputData(fout, EngToVietDict.Root);
	fout.close();
}

void OutputVietToEngData() {
	ofstream fout;
	fout.open("../Database/Viet Anh.txt");
	HelperOutputData(fout, VietToEngDict.Root);
	fout.close();
}

void HelperOutputData(ofstream& fout, TrieNode* Root) {
	if (Root == NULL) return;
	if (Root->NodeChar != '\0') {
		for (auto temp : Root->Definition) {
			fout << Root->Word << " " << "`" << temp << endl;
		}		
	}
	for (int i = 0; i < MaxDiffChar; i++) {
		HelperOutputData(fout, Root->NextNode[i]);
	}
}