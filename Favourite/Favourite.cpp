#include "Favourite.h"

vector<Favourite*> FavouriteList;

void LoadFavouriteData() {
	ifstream fin;
	fin.open("../Favourite/Favourite List.txt");
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
		AddToFavouriteList(a, b);
	}
	fin.close();
}

void AddToFavouriteList(string& InputWord, string& InputDef) {
	int Size = FavouriteList.size();
	// inputword da ton tai trong Favourite
	if (Size <= 10) {
		for (int i = 0; i < Size; i++) {
			if (FavouriteList[i]->word == InputWord) {
				FavouriteList[i]->Definition.push_back(InputDef);
				return;
			}
		}
	}
	// input word chua ton tai trong Favourite
	if (Size == 10) {
		Favourite* temp = new Favourite(InputWord, InputDef);
		FavouriteList.pop_back();
		FavouriteList.insert(FavouriteList.begin(), temp);
	}
	else if (Size < 10) {
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