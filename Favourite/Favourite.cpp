#include "Favourite.h"

vector<Favourite*> FavouriteList;
bool EnableToAdd;
bool EnableToRemove;

void LoadFavouriteData() {
	ifstream fin;
	fin.open("../Favourite/Favourite List.txt");
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
		AddToFavouriteList(a, b);
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