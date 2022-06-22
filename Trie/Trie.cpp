#include "../Trie/Trie.h"

void DefStr::SetDef(string& Def) {
	s = Def;
}

void Trie::AddToTrie(string& InputStr, string& Def) {
	if (Root == NULL) {
		Root = new TrieNode;
	}

	TrieNode* Cur = Root;

	for (char c : InputStr) {
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) {
			Cur->NextNode[cNum] = new TrieNode;
		}
		Cur = Cur->NextNode[cNum];
	}

	(*Cur->Def).SetDef(Def);
}

DefStr* Trie::SearchForDef(string& InputStr) {
	TrieNode* Cur = Root;
	for (char c : InputStr) {
		int cNum = int(c);
		if (Cur->NextNode[cNum] == NULL) return NULL;
		Cur = Cur->NextNode[cNum];
	}
	return Cur->Def;
}

void Trie::EditDef(string& InputStr, string& NewDef) {
	DefStr* NeedDef = SearchForDef(InputStr);
	(*NeedDef).SetDef(NewDef);
}