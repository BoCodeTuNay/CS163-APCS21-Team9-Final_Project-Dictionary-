#include "../Trie/Trie.h"

void UpdChildsNum(const TrieNode*& Leaf) {
	TrieNode* Cur = Leaf;
	while (Cur != NULL) {
		Cur = Cur->ParNode;
		if (Cur == NULL) return;
		Cur->ChildsNum = 0;
		for (int cNum = 0; cNum < MaxDiffChar; ++cNum)
			if (Cur->NextNode[cNum] != NULL) {
				Cur->ChildsNum += 1 + Cur->NextNode[cNum]->ChildsNum;
			}
	}
	return;
}

void Trie::AddToTrie(const string& InputStr, const string& Def) {
	if (Root == NULL) {
		Root = new TrieNode();
	}

	TrieNode* Cur = Root;

	string WordTmp = "";
	for (char c : InputStr) {
		WordTmp += c;
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) {
			Cur->NextNode[cNum] = new TrieNode(c);
			Cur->NextNode[cNum]->ParNode = Cur;
		}
		Cur = Cur->NextNode[cNum];
	}

	Cur->Word = WordTmp;
	Cur->Definition.push_back(Def);
	ExistingWords.push_back(Cur);

	this->UpdChildsNum(Cur);

	return;
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

TrieNode* Trie::CheckWordExist(const string& InputStr) {
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
	return &(Cur->Definition);
}

bool Trie::EditDef(const string& InputStr, const string& NewDef) {
	string* NeedDef = SearchForDef(InputStr);

	if (NeedDef != NULL) {
		*NeedDef = NewDef;
		return true;
	}
	return false;
}

bool Trie::DelWord(const string& InputStr) {
	TrieNode* DelNode = this->SearchForDef(InputStr);
	if (DelNode == NULL) return false;
	if (DelNode->ChildsNum == 0) {
		while (DelNode != this->Root && DelNode != NULL && DelNode->ChildsNum == 0) {
			TrieNode* Cur = DelNode;
			DelNode = Cur->ParNode;
			--(DelNode->ChildsNum);
			delete Cur;
		}
		return true;
	}
	else {
		DelNode->Definition = "";
		//DelNode->Word = "";
		return true;
	}
}