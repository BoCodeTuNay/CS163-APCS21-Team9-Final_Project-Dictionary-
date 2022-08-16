#pragma once

#include "../Trie/Trie.h"
#include "../History/History.h"
#include "../Favourite/Favourite.h"

extern Trie CurrentDict;
extern Trie CurrentDictDef;
extern Trie EmojiDict;
extern Trie SlangDict;
extern Trie EngToEngDict;
extern Trie EngToVietDict;
extern Trie VietToEngDict;
extern Trie EmojiDefDict;
extern Trie SlangDefDict;
extern Trie EngToEngDefDict;
extern Trie EngToVietDefDict;
extern Trie VietToEngDefDict;

extern Trie EmojiDictOrigin;
extern Trie SlangDictOrigin;
extern Trie EngToEngDictOrigin;
extern Trie EngToVietDictOrigin;
extern Trie VietToEngDictOrigin;

extern Trie EmojiDictDefOrigin;
extern Trie SlangDictDefOrigin;
extern Trie EngToEngDictDefOrigin;
extern Trie EngToVietDictDefOrigin;
extern Trie VietToEngDictDefOrigin;

// MenuName de xac dinh vi tri cua CurrentDict
extern string MenuName;

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
extern string KeyDef;

void LoadEmojiData();

void LoadEngToEngData();

void LoadSlangData();

void LoadVietToEngData();

void LoadEngToVietData();

void LoadOriginEmoji();

void LoadOriginSlang();

void LoadOriginEngToEng();

void OutputEmojiData();

void OutputSlangData();

void OutputEngToEngData();

void OutputEngToVietData();

void OutputVietToEngData();

void HelperOutputData(ofstream& fout, TrieNode* Root);
