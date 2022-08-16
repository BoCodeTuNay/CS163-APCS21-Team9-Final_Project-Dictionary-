#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct History {
	string word;
	vector<string> Definition;
	History() = default;
	History(string& InputWord, string& InputDef) {
		this->word = InputWord;
		this->Definition.push_back(InputDef);
	}
};

extern vector<History*>HistoryList;

void LoadHistoryData();

void AddToHistoryList(string& InputWord, string& InputDef);

void OutputToHistoryList();

void RemoveFromHistoryList(string& InputWord);