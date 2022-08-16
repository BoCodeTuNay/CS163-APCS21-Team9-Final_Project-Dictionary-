#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include "../Constant.h"

using namespace std;

struct TrieNode {
	// Su dung string word de co the lay duoc word ma khong phai traverse qua trie
	string Word;
	
	// 1 từ có thể có nhiều định nghĩa
	vector<string> Definition;

	// Phuc vu cho viec in ra suggest word khi search 
	vector<TrieNode*> BelowWords;

	char NodeChar;
	long long ChildsNum;

	TrieNode* ParNode;
	TrieNode** NextNode = NULL;

	TrieNode() {
		Word = "";
		ChildsNum = 0;
		ParNode = NULL;
		NodeChar = '\0';
		Definition = {};

		NextNode = new TrieNode * [MaxDiffChar];
		for (int i = 0; i < MaxDiffChar; ++i) {
			NextNode[i] = NULL;
		}
			
	}

	TrieNode(char c) {
		Word = "";
		ChildsNum = 0;
		ParNode = NULL;
		NodeChar = c;
		Definition = {};

		NextNode = new TrieNode * [MaxDiffChar];
		for (int i = 0; i < MaxDiffChar; ++i) {
			NextNode[i] = NULL;
		}
	}

	~TrieNode() {
		for (int i = 0; i < MaxDiffChar; ++i) {
			delete NextNode[i];
		}
		delete[] NextNode;
	}

};
 
struct TrieNodeDef {
	string Def;
	vector<string> Word;
	char NodeChar;
	TrieNodeDef* NextNode[MaxDiffChar];
	TrieNodeDef() {
		Def = "";
		NodeChar = '\0';
		for (int i = 0; i < MaxDiffChar; i++) this->NextNode[i] = NULL;
	}
	TrieNodeDef(char c) {
		Def = "";
		NodeChar = c;
		for (int i = 0; i < MaxDiffChar; i++) this->NextNode[i] = NULL;
	}
};

struct Trie {
	TrieNode* Root = NULL;
	TrieNodeDef* RootDef = NULL;

	// Phuc vu cho viec random access 1 tu ton tai trong tu dien
	vector<TrieNode*> ExistingWords;

	// Phuc vu cho viec search definition cua cac word da xoa
	vector<string> WordDeleted;

	// update so luong child cua node 
	void UpdChildsNum(TrieNode* Leaf);

	// Them tu va dinh nghia vao trie
	void AddToTrie(const string& InputStr, const string& Def);

	TrieNode* SearchForNode(const string& InputStr);

	bool EditDef(const string& InputStr, const string& NewDef);

	bool DelWord(const string& InputStr);

	// Trả về node cuối nếu word đã được load, ngc lại trả về null 
	TrieNode* TakeLastNode(string& InputStr);
	
	// xoa toan bo trie
	void deleteAllNode();

	void deleteAllDefNode();

	void AddToTrieDef(const string& InputDef, const string& InputWord);

	TrieNodeDef* TakeLastDefNode(string& InputStr);
};

// lưu các node có nghĩa con của node Cur
void SaveBelowWords(TrieNode* Cur, TrieNode* Cur1);

void HelperDeleteAllNode(TrieNode*& Cur);

void HelperDeleteAllDefNode(TrieNodeDef*& Cur);