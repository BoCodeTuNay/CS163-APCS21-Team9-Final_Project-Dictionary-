#pragma once

#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Trie/Trie.h"

using namespace std;

extern Trie CurrentDict;
extern Trie EmojiDict;
extern Trie SlangDict;
extern Trie EngToEngDict;
extern Trie EngToVietDict;
extern Trie VietToEngDict;

// Bien boolean phuc vu chuc nang random
// Loai bo truong hop data bi random lai khi nguoi dung su dung cac phim mui ten
extern bool IsRandomValid;

void LoadEmojiData();
void LoadEngToEngData();