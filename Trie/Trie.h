#pragma once

#include <string>
#include <cstring>
#include <vector>
#include "../Constant.h"

using namespace std;

struct TrieNode {
	// Su dung string word de co the lay duoc word ma khong phai traverse qua trie
	string Word;

	string Definition;

	char NodeChar;

	TrieNode* NextNode[MaxDiffChar];

	TrieNode() {
		NodeChar = '\0';
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}

	TrieNode(char c) {
		NodeChar = c;
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}
};

struct Trie {
	TrieNode* Root = NULL;

	// Phuc vu cho viec random access 1 tu ton tai trong tu dien
	vector<TrieNode*>ExistingWords;

	void AddToTrie(const string& InputStr, const string& Def);
	string* SearchForDef(const string& InputStr);
	void EditDef(const string& InputStr, const string& NewDef);
};

