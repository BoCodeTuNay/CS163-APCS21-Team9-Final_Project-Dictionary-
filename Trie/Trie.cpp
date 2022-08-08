#include "../Trie/Trie.h"

void SaveBelowWords(TrieNode* Cur, TrieNode* Cur1) {
	if (!Cur1) return;
	if (Cur1->Word != "") {
		Cur->BelowWords.push_back(Cur1);
	}
	for (int i = 0; i < MaxDiffChar; i++) {
		SaveBelowWords(Cur, Cur1->NextNode[i]);
	}
}

void Trie::UpdChildsNum(TrieNode* Leaf) {
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

	UpdChildsNum(Cur);
}

vector<string> Trie::SearchForDef(const string& InputStr) {
	vector<string> temp(1, "");
	vector<string> res;
	TrieNode* Cur = Root;
	for (char c : InputStr) {
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) return temp;
		Cur = Cur->NextNode[cNum];
	}
	return Cur->Definition;
}

bool Trie::EditDef(const string& InputStr, const string& NewDef) {
	vector<string> NeedDef = SearchForDef(InputStr);
	if (NeedDef[0] != "") return true;
	return false;
}

//bool Trie::DelWord(const string& InputStr) {
//	TrieNode* DelNode = this->SearchForDef(InputStr);
//	if (DelNode == NULL) return false;
//	if (DelNode->ChildsNum == 0) {
//		while (DelNode != this->Root && DelNode != NULL && DelNode->ChildsNum == 0) {
//			TrieNode* Cur = DelNode;
//			DelNode = Cur->ParNode;
//			--(DelNode->ChildsNum);
//			delete Cur;
//		}
//		return true;
//	}
//	else {
//		DelNode->Definition = "";
//		//DelNode->Word = "";
//		return true;
//	}
//}

TrieNode* Trie::TakeLastNode(string& InputStr) {
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
	if (i == InputStr.length()) return Cur;
	else return nullptr;
}