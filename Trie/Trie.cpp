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

void Trie::UpdateChildsNum(TrieNode* Leaf) {
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

	UpdateChildsNum(Cur);
}

TrieNode* Trie::SearchForNode(const string& InputStr) {
	TrieNode* Res = NULL;
	TrieNode* Cur = Root;
	for (char c : InputStr) {
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) return Res;
		Cur = Cur->NextNode[cNum];
	}
	return Cur;
}

bool Trie::EditDef(const string& InputStr, const string& NewDef) {
	TrieNode* NeedNode = SearchForNode(InputStr);
	if (NeedNode == NULL || NeedNode->Definition.size() == 0) return false;
	NeedNode->Definition.clear();
	NeedNode->Definition.push_back(NewDef);
	return true;
}

bool Trie::DelWord(const string& InputStr) {
	TrieNode* DelNode = this->SearchForNode(InputStr);
	if (DelNode == NULL) return false;
	DelNode->Definition.clear();
	vector<TrieNode*> ::iterator it;
	for (it = ExistingWords.begin(); it != ExistingWords.end(); ++it) {
		if (*(it) == DelNode) {
		ExistingWords.erase(it);
		break;
		}
	}
	return true;
}

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

void Trie::deleteAllNode() {
	HelperDeleteAllNode(Root);
}

void Trie::deleteAllDefNode() {
	HelperDeleteAllDefNode(RootDef);
}

void Trie::AddToTrieDef(const string& InputDef, const string& InputWord) {
	if (RootDef == NULL) {
		RootDef = new TrieNodeDef();
	}

	TrieNodeDef* Cur = RootDef;

	string WordTmp = "";
	for (char c : InputDef) {		
		int cNum = int(c);
		if (c >= 128 || c < 0) continue;
		WordTmp += c;
		if (Cur->NextNode[cNum] == NULL) {
			Cur->NextNode[cNum] = new TrieNodeDef(c);
		}
		Cur = Cur->NextNode[cNum];
	}

	Cur->Def = WordTmp;
	Cur->Word.push_back(InputWord);
}

TrieNodeDef* Trie:: TakeLastDefNode(string& InputStr) {
	TrieNodeDef* Res = NULL;
	TrieNodeDef* Cur = RootDef;
	for (char c : InputStr) {
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) return Res;
		Cur = Cur->NextNode[cNum];
	}
	return Cur;
}

void HelperDeleteAllNode(TrieNode*& Cur) {
	for (int i = 0; i < MaxDiffChar; i++) {
		if (Cur->NextNode[i] != NULL) {
			HelperDeleteAllNode(Cur->NextNode[i]);
		}
	}
	delete(Cur);
	Cur = nullptr;
}

void HelperDeleteAllDefNode(TrieNodeDef*& Cur) {
	for (int i = 0; i < MaxDiffChar; i++) {
		if (Cur->NextNode[i] != NULL) {
			HelperDeleteAllDefNode(Cur->NextNode[i]);
		}
	}
	delete(Cur);
	Cur = nullptr;
}