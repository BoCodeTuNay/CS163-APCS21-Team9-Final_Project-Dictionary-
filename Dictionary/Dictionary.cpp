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

	/*cout << EmojiDict.Root->ChildsNum << endl;
	EmojiDict.deleteAllNode();
	if (EmojiDict.Root == NULL) cout << "haha";*/

	LoadHistoryData();
	LoadFavouriteData();

	page = MAIN_MENU;

	Event();

	system("pause");
	return 0;
}

