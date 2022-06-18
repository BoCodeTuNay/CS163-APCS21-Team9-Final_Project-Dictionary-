#pragma once
#include <string>
#include <string.h>
#include "../Constant.h"

using namespace std;

struct DefStr {
	string s;

	void SetDef(string& Def);
};

struct TrieNode {
	char NodeChar;
	DefStr* Def;
	TrieNode* NextNode[MaxDiffChar];

	TrieNode() {
		Def = NULL;
		NodeChar = ' ';
		for (int i = 0; i < MaxDiffChar; ++i) Root->NextNode[i] = NULL;
	}
};

struct Trie {
	TrieNode* Root;

	Trie() : Root(NULL) {
	}

	void AddToTrie(string& InputStr, string& Def);
	DefStr* SearchForDef(string& InputStr);
	void EditDef(string& InputStr, string& NewDef);
};

#include ".../Trie/Trie.cpp"
