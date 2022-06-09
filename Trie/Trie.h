#pragma once
#include "../Constant.h"

struct DefStr {
	char s[150];
};

struct TrieNode {
	char NodeChar;
	Definition* DefStr;
	TrieNode* NextNode[26];

	TrieNode() : NodeChar(' '), DefStr(NULL) {
	}
};

struct Trie {
	TrieNode* Root;

	Trie() : Root(NULL) {
	}

	void AddToTrie(Char InputStr[], int InputSize);
};

#include ".../Trie/Trie.cpp"
