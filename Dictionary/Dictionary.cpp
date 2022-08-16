#include "../Data/Data.h"
#include "../UI/Menu.h"
#include "../UI/KeyboardInput.h"
#include "../Trie/Trie.h"

using namespace std;

int main() {
	// Cac setting cho cua so console
	SetWindowSize(ConsoleWidth, ConsoleHeight);
	ShowScrollbar(0);
	DisableResizeWindow();
	DisableCtrButton(false, false, true);
	SetCursor(false);

	LoadEmojiData();
	LoadEngToEngData();
	LoadSlangData();
	LoadVietToEngData();
	LoadEngToVietData();

	LoadHistoryData();
	LoadFavouriteData();

	page = MAIN_MENU;

	//TrieNodeDef* temp = EmojiDefDict.RootDef->NextNode[73]->NextNode[32]->NextNode[115]->NextNode[101]->NextNode[101];
	//cout << temp->Def;
	//for (auto k : temp->Word) {
	//	cout << k << endl;
	//}

	Event();

	system("pause");
	return 0;
}

