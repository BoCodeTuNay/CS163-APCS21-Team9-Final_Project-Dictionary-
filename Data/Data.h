#pragma once

#include <fstream>
#include <vector>
#include "../Trie/Trie.h"

using namespace std;

extern Trie EmojiDict;

// Bien boolean phuc vu chuc nang random
// Loai bo truong hop data bi random lai khi nguoi dung su dung cac phim mui ten
extern bool IsRandomValid;

void LoadEmojiData();
