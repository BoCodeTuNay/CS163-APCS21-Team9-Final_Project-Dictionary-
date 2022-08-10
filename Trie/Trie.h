#pragma once

#include <algorithm>
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

	// Phuc vu cho viec in ra suggest word khi search 
	vector<TrieNode*> BelowWords;

	// check xem có tồn tại các node con có nghĩa hay không
	bool checkBelow;

	char NodeChar;
	long long ChildsNum;

	TrieNode* ParNode;
	TrieNode* NextNode[MaxDiffChar];

	TrieNode() {
		Word = "";
		ChildsNum = 0;
		ParNode = NULL;
		NodeChar = '\0';
		Definition = {};
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}

	TrieNode(char c) {
		Word = "";
		ChildsNum = 0;
		ParNode = NULL;
		NodeChar = c;
		Definition = {};
		for (int i = 0; i < MaxDiffChar; ++i) this->NextNode[i] = NULL;
	}

};
 
struct Trie {
	TrieNode* Root = NULL;

	// Phuc vu cho viec random access 1 tu ton tai trong tu dien
	vector<TrieNode*> ExistingWords;

	// update so luong child cua node 
	void UpdChildsNum(TrieNode* Leaf);

	// them tu va dinh nghia vao trie
	void AddToTrie(const string& InputStr, const string& Def);

	// tra ve cac dinh nghia cua tu
	vector<string> SearchForDef(const string& InputStr);

	TrieNode* SearchForNode(const string& InputStr);

	bool EditDef(const string& InputStr, const string& NewDef);

	bool DelWord(const string& InputStr);

	// Trả về node cuối nếu word đã được load, ngc lại trả về null 
	TrieNode* TakeLastNode(string& InputStr);

	// xoa toan bo trie
	void deleteAllNode();
};

// lưu các node có nghĩa con của node Cur
void SaveBelowWords(TrieNode* Cur, TrieNode* Cur1);

void HelperDeleteAllNode(TrieNode*& Cur);