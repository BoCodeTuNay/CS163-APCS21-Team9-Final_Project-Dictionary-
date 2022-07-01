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
	Cur->Definition = Def;
	ExistingWords.push_back(Cur);
}

string* Trie::SearchForDef(const string& InputStr) {
	TrieNode* Cur = Root;
	for (char c : InputStr) {
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) return NULL;
		Cur = Cur->NextNode[cNum];
	}
	return &(Cur->Definition);
}

void Trie::EditDef(const string& InputStr, const string& NewDef) {
	string* NeedDef = SearchForDef(InputStr);

	if (NeedDef != NULL) {
		*NeedDef = NewDef;
	}
}