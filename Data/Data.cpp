#include "Data.h"

Trie EmojiDict;

// Bien boolean phuc vu chuc nang random
// Loai bo truong hop data bi random lai khi nguoi dung su dung cac phim mui ten
bool IsRandomValid = true;

void LoadEmojiData()
{
	// Tam thoi test voi emoji database duoc format lai, se thay doi sau khi tat ca cac db duoc format lai
	ifstream input("../Database/emotional_smaller_size_reformated.txt");

	while (!input.eof())
	{
		string Word, Definition;
		getline(input, Word, '\n');
		getline(input, Definition, '\n');

		EmojiDict.AddToTrie(Word, Definition);
	}

	input.close();
}