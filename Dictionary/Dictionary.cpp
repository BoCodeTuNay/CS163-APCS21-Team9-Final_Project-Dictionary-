#include "../Data/Data.h"
#include "../UI/Menu.h"
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

	page = 1;

	Event();
	cout << endl;

	system("pause");
	return 0;
}

