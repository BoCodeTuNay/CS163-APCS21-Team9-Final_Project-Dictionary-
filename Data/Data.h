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

// Cac bien phuc vu cho chuc nang random
#define GAME_OVER 0
#define GAME_WON 1
#define GAME_NOT_FINISHED 2

extern int RandomIndex;
extern vector<int> AnswersIndex;
extern int GameState;

//string Keyword để search for keyword
extern string KeyWord;

void LoadEmojiData();

void LoadEngToEngData();

void LoadHistoryData();

void AddToHistoryList(string& InputWord, string& InputDef);

void OutputToHistoryList();