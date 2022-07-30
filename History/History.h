#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct History {
	string word;
	vector<string> Definition;
	History() {
	
	}
	History(string& InputWord, string& InputDef) {
		this->word = InputWord;
		this->Definition.push_back(InputDef);
	}
};
