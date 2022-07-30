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
	long long ChildsNum;

	TrieNode* ParNode;
	TrieNode* NextNode[MaxDiffChar];

	TrieNode() {
		Word = "";
		ChillsNum = 0;
		ParNode = NULL;
		NodeChar = '\0';
		Definition = "";
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}

	TrieNode(char c) {
		Word = "";
		ChillsNum = 0;
		ParNode = NULL;
		NodeChar = c;
		Definition = "";
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}
};

struct Trie {
	TrieNode* Root = NULL;

	// Phuc vu cho viec random access 1 tu ton tai trong tu dien
	vector<TrieNode*>ExistingWords;

	void UpdChildsNum(const TrieNode*& Leaf);
	bool EditDef(const string& InputStr, const string& NewDef);
	void AddToTrie(const string& InputStr, const string& Def);
	string* SearchForDef(const string& InputStr);
	bool DelWord(const string& InputStr);
};

