#pragma once

#include "../Trie/Trie.h"
#include "../History/History.h"
#include "../Favourite/Favourite.h"

extern Trie CurrentDict;
extern Trie EmojiDict;
extern Trie SlangDict;
extern Trie EngToEngDict;
extern Trie EngToVietDict;
extern Trie VietToEngDict;

// Cac bien phuc vu cho chuc nang random
#define GAME_OVER 0
#define GAME_WON 1
#define GAME_NOT_FINISHED 2

extern int RandomIndex;
extern vector<int> AnswersIndex;
extern int GameState;
extern int CorrectAnswer;

//string Keyword để search for keyword
extern string KeyWord;
extern string SuggestWord;

void LoadEmojiData();

void LoadEngToEngData();

void LoadSlangData();
