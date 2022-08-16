#include "Favourite.h"

vector<Favourite*> FavouriteList;
bool EnableToAdd;
bool EnableToRemove;

void LoadFavouriteData() {
	ifstream fin;
	fin.open("../Favourite/Favourite List.txt");
	string Line;
	while (!fin.eof()) {
		getline(fin, Line, '\n');
		if (Line.size() == 0) break;

		stringstream s(Line);
		bool flag = false;
		string Word, Definition, tmp;
		while (getline(s, tmp, ' ')) {
			if (tmp[0] == '`') {
				flag = true;
			}
			if (!flag) {
				Word += tmp;
				Word += ' ';
			}
			if (flag) {
				Definition += tmp;
				Definition += ' ';
			}
		}
		Definition.erase(0, 1);
		Word.erase(Word.length() - 1, 1);
		Definition.erase(Definition.length() - 1, 1);
		AddToFavouriteList(Word, Definition);
	}
	fin.close();
}

void AddToFavouriteList(string& InputWord, string& InputDef) {
	EnableToAdd = true;
	int maxSize = 8;
	// Favourite List co toi da 8 tu
	int Size = FavouriteList.size();
	// inputword da ton tai trong Favourite
	if (Size <= maxSize) {
		for (int i = 0; i < Size; i++) {
			if (FavouriteList[i]->word == InputWord) {
				FavouriteList[i]->Definition.push_back(InputDef);
				return;
			}
		}
	}
	// input word chua ton tai trong Favourite
	if (Size == maxSize) {
		EnableToAdd = false;
		return;
	}
	else if (Size < maxSize) {
		Favourite* temp = new Favourite(InputWord, InputDef);
		FavouriteList.insert(FavouriteList.begin(), temp);
	}
}

void OutputToFavouriteList() {
	ofstream fout;
	fout.open("../Favourite/Favourite List.txt");
	for (auto u : FavouriteList) {
		for (auto v : u->Definition) {
			if (u == FavouriteList.back() && v == u->Definition.back()) {
				fout << u->word << " `" << v;
				return;
			}
			fout << u->word << " `" << v << endl;
		}
	}
	fout.close();
}

void RemoveFromFavouriteList(string& InputWord) {
	EnableToRemove = true;
	int Size = FavouriteList.size();
	for (int i = 0; i < Size; i++) {
		if (FavouriteList[i]->word == InputWord) {
			vector<Favourite*> ::iterator it = FavouriteList.begin() + i;
			FavouriteList.erase(it);
			return;
		}
	}
	EnableToRemove = false;
}