#include "Menu.h"

int main() {
	resizeConsole(ConsoleWidth, ConsoleHeight);
	SetConsoleTitle(TEXT("Dictionary"));
	ShowScrollbar(0);	
	DisableResizeWindow();
	DisableCtrButton(false, false, true);
	ShowCur(false);

	page = 1;

	xulisukien();
	cout << endl;
	
	/*string s1 = "Emojis";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	setColorBGTextXY((ConsoleWidth / 2 - s1.length() / 2), 25, 15, 9, copy1);*/

	/*HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED |BACKGROUND_GREEN);
	cout << "HIHIH" << endl;*/


	system("pause");
	return 0;
}

