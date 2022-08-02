#include "History.h"

vector<History*>HistoryList;

void LoadHistoryData() {
	ifstream fin;
	fin.open("../History/History List.txt");
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
		AddToHistoryList(a, b);
	}
	fin.close();
}

void AddToHistoryList(string& InputWord, string& InputDef) {
	int Size = HistoryList.size();
	// inputword da ton tai trong history
	if (Size <= 10) {
		for (int i = 0; i < Size; i++) {
			if (HistoryList[i]->word == InputWord) {
				HistoryList[i]->Definition.push_back(InputDef);
				return;
			}
		}
	}
	// input word chua ton tai trong history
	if (Size == 10) {
		History* temp = new History(InputWord, InputDef);
		HistoryList.pop_back();
		HistoryList.insert(HistoryList.begin(), temp);
	}
	else if (Size < 10) {
		History* temp = new History(InputWord, InputDef);
		HistoryList.insert(HistoryList.begin(), temp);
	}
}

void OutputToHistoryList() {
	ofstream fout;
	fout.open("../History/History List.txt");
	for (auto u : HistoryList) {
		for (auto v : u->Definition) {
			if (u == HistoryList.back() && v == u->Definition.back()) {
				fout << u->word << " `" << v;
				return;
			}
			fout << u->word << " `" << v << endl;
		}
	}
	fout.close();
}
