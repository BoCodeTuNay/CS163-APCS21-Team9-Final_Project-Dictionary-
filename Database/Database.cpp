#include "..\Database\Database.h"
#include <fstream>

using namespace std;

void LoadDict(Trie& Dict, string& FileName) {
	ifstream fin;
	fin.open(FileName".txt");

	char tmp;
	string Word, Def;

	while (!fin.eof()) {
		fin >> Word;
		fin >> tmp;
		getline(fin, Def);
		if (Def[0] == ' ') Def.erase(Def.begin());
		Dict.AddToTrie(Word, Def);
	}

	fin.close();
}