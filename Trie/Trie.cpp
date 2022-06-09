#include "../Trie/Trie.h"

void Trie::AddToTrie(Char InputStr[], int InputSize) {
	if (Root == NULL) {
		Root = new TrieNode;
		for (int i = 0; i < 26; ++i) NextNode[i] = NULL;
	}


}