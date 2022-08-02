#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct Favourite {
	string word;
	vector<string> Definition;
	Favourite() {

	}
	Favourite(string& InputWord, string& InputDef) {
		this->word = InputWord;
		this->Definition.push_back(InputDef);
	}
};