#pragma once

#include "../Trie/Trie.h"
#include "../History/History.h"

extern Trie CurrentDict;
extern Trie EmojiDict;
extern Trie SlangDict;
extern Trie EngToEngDict;
extern Trie EngToVietDict;
extern Trie VietToEngDict;
extern vector<History*>HistoryList;

// Bien int phuc vu chuc nang random
// Loai bo truong hop data bi random lai khi nguoi dung su dung cac phim mui ten
extern int RandomIndex;

//string Keyword để search for keyword
extern string KeyWord;

void LoadEmojiData();

void LoadEngToEngData();

void LoadHistoryData();

void AddToHistoryList(string& InputWord, string& InputDef);

void OutputToHistoryList();