#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

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

extern vector<Favourite*> FavouriteList;
extern bool EnableToAdd;

void LoadFavouriteData();

void AddToFavouriteList(string& InputWord, string& InputDef);

void OutputToFavouriteList();