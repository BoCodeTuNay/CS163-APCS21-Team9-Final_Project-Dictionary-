#include "../Trie/Trie.h"


void Trie::AddToTrie(const string& InputStr, const string& Def) {
	if (Root == NULL) {
		Root = new TrieNode();
	}

	TrieNode* Cur = Root;

	string WordTmp;
	for (char c : InputStr) {
		WordTmp += c;
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) {
			Cur->NextNode[cNum] = new TrieNode(c);
		}
		Cur = Cur->NextNode[cNum];
	}

	Cur->Word = WordTmp;
	Cur->Definition.push_back(Def);
	ExistingWords.push_back(Cur);
}

//string* Trie::SearchForDef(const string& InputStr) {
//	TrieNode* Cur = Root;
//	for (char c : InputStr) {
//		int cNum = int(c);
//		if (Cur->NextNode[cNum] == NULL) return NULL;
//		Cur = Cur->NextNode[cNum];
//	}
//	return &(Cur->Definition);
//}

//bool Trie::EditDef(const string& InputStr, const string& NewDef) {
//	string* NeedDef = SearchForDef(InputStr);
//
//	if (NeedDef != NULL) {
//		*NeedDef = NewDef;
//		return true;
//	}
//	return false;
//}

TrieNode* Trie::checkWordExist(const string& InputStr) {
	if (Root == nullptr) return nullptr;
	TrieNode* Cur = Root;
	int i = 0;
	for (i; i < InputStr.length(); i++) {
		int cNum = int(InputStr[i]);
		if (Cur->NextNode[cNum] == NULL) break;
		if (Cur->NextNode[cNum]->NodeChar == InputStr[i]) {
			Cur = Cur->NextNode[cNum];
		}
	}
	if (i == InputStr.length() && Cur->Word != "") return Cur;
	else return nullptr;
}