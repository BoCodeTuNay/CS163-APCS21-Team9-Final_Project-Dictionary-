﻿#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
#include "../Constant.h"

using namespace std;

struct TrieNode {
	// Su dung string word de co the lay duoc word ma khong phai traverse qua trie
	string Word;
	
	// 1 từ có thể có nhiều định nghĩa
	vector<string> Definition;

	char NodeChar;
	long long ChildsNum;

	TrieNode* ParNode;
	TrieNode* NextNode[MaxDiffChar];

	TrieNode() {
		Word = "";
		ChildsNum = 0;
		ParNode = NULL;
		NodeChar = '\0';
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}

	TrieNode(char c) {
		Word = "";
		ChildsNum = 0;
		ParNode = NULL;
		NodeChar = c;
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}
};
 
struct Trie {
	TrieNode* Root = NULL;

	// Phuc vu cho viec random access 1 tu ton tai trong tu dien
	vector<TrieNode*>ExistingWords;

	// update so luong child cua node 
	void UpdChildsNum(TrieNode* Leaf);

	// them tu va dinh nghia vao trie
	void AddToTrie(const string& InputStr, const string& Def);

	// tra ve cac dinh nghia cua tu
	vector<string> SearchForDef(const string& InputStr);

	bool EditDef(const string& InputStr, const string& NewDef);

	bool DelWord(const string& InputStr);

	// Trả về node cuối nếu word đã được load, ngc lại trả về null 
	TrieNode* CheckWordExist(const string& InputStr);
};

