#include "Menu.h"

// bam vao key de dung chuong trinh
void WaitKey()
{
	cout << endl << endl << endl << "\t\t\tPress any key";
	while (_kbhit()) _getch(); // Empty the input buffer
	_getch(); // Wait for a key
	while (_kbhit()) _getch(); // Empty the input buffer (some keys sends two messages)
}

// Hàm thay đổi kích cỡ của khung cmd với tham số truyền vào là chiều cao, chiều rộng.
void resizeConsole(int width, int height)
{
	/*HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);*/

	COORD crd = { width, height };
	SMALL_RECT rec = { 0, 0, width - 1, height - 1 };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleWindowInfo(hConsoleOutput, TRUE, &rec);
	SetConsoleScreenBufferSize(hConsoleOutput, crd);
}

// Hàm tô màu.
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

// font chu
void textFont() {
	HANDLE font;
	font = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX temp;
	temp.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	temp.dwFontSize.X = 0;
	temp.dwFontSize.Y = 20;
	temp.FontFamily = TMPF_TRUETYPE;
	wcscpy_s(temp.FaceName, L"Arial");
	SetCurrentConsoleFontEx(font, true, &temp);
	/*GetCurrentConsoleFontEx(font, true, );*/
}
void textFont2() {
	HANDLE font;
	font = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX temp;
	temp.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	temp.dwFontSize.X = 0;
	temp.dwFontSize.Y = 20;
	temp.FontFamily = TMPF_TRUETYPE;
	wcscpy_s(temp.FaceName, L"Courier");
	SetCurrentConsoleFontEx(font, true, &temp);
}

// Hàm dịch chuyển con trỏ đến tọa độ x, y.
void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x - 1,y - 1 };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// Hàm xóa màn hình.
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

// Tô màu chữ rồi đổi về mặc định
void ToMau(int x, int y, string a, int color) // x, y là tọa độ con trỏ cần nhảy đến để viết, a là chuỗi cần truyền vào, color là màu truyền vào.
{
	gotoxy(x, y);
	textcolor(color);
	cout << a;
	textcolor(7);
}

//disable resize window
void DisableResizeWindow()
{
	HWND hWnd = GetConsoleWindow();
	SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);
}

//true: hien, false: an
void ShowScrollbar(BOOL Show)
{
	HWND hWnd = GetConsoleWindow();
	ShowScrollBar(hWnd, SB_BOTH, Show);
}

//disable zoom, minimize, close
void DisableCtrButton(bool Close, bool Min, bool Max)
{
	HWND hWnd = GetConsoleWindow();
	HMENU hMenu = GetSystemMenu(hWnd, false);

	if (Close == 1)
	{
		DeleteMenu(hMenu, SC_CLOSE, MF_BYCOMMAND);
	}
	if (Min == 1)
	{
		DeleteMenu(hMenu, SC_MINIMIZE, MF_BYCOMMAND);
	}
	if (Max == 1)
	{
		DeleteMenu(hMenu, SC_MAXIMIZE, MF_BYCOMMAND);
	}
}

//viết tiếng viêt
BOOL WINAPI SetConsoleOutputCP(
	_In_ UINT wCodePageID
);

//tạo tiêu đề 
BOOL WINAPI SetConsoleTitle(
	_In_ LPCTSTR lpConsoleTitle
);

//ẩn hiện con trỏ
void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConCurInf;

	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = CursorVisibility;

	SetConsoleCursorInfo(handle, &ConCurInf);
}

//đổi màu background
void setBackgroundColor(WORD color)
{
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4; // Dich trai 3 bit de phu hop voi mau nen
	wAttributes &= 0xff0f; // Cai 0 cho 1 bit chu nhay va 3 bit mau nen
	wAttributes |= color;
	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

//reset color
WORD textattr()
{
	CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
	GetConsoleScreenBufferInfo(hConsoleOutput, &ConsoleInfo);
	return ConsoleInfo.wAttributes;
}
void resettextattr()
{
	DWORD Mau_Mac_Dinh = textattr();
	SetConsoleTextAttribute(hConsoleOutput, Mau_Mac_Dinh);
}

// đổi màu background + chữ
void setColorBGTextXY(bool flag, SHORT x, SHORT y, WORD color, WORD background, LPSTR str, ...)
{

	gotoxy(x, y);
	/*setBackgroundColor(background);*/
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (flag == true) {
		SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_GREEN);
	}
	/*textcolor(color);*/
	/*In duoc nhieu chu hon*/
	va_list args;
	va_start(args, str);
	vprintf(str, args);
	va_end(args);
	/*In duoc nhieu chu hon*/
	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	resettextattr();
	//setColor(7);
}

// vẽ menu
void Menuchung() {
	int i;
	for (i = 0; i < ConsoleWidth; i++) {
		cout << "-";
	}
	cout << endl;
	string a;
	a = "DICTIONARY";
	ToMau(35, 2, a, 5);
	cout << endl;
	int j;
	for (j = 0; j < ConsoleWidth; j++) {
		cout << "-";
	}
}
void MenuHelper2() {
	int i;
	for (i = 0; i < ConsoleWidth; i++) {
		cout << "-";
	}
	cout << endl;
	string a;
	a = "DICTIONARY";
	ToMau(35, 2, a, 5);
	cout << endl;
	int j;
	for (j = 0; j < ConsoleWidth; j++) {
		cout << "-";
	}
	cout << endl;
	string b = "YOU WANT TO?";
	ToMau(34, 4, b, 14);
}
void Menu1(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, flag6 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	if (index == 4) flag5 = true;
	if (index == 5) flag6 = true;
	s1 = "EMOJI";
	s2 = "SLANG WORD";
	s3 = "ENGLISH TO ENGLISH";
	s4 = "ENGLISH TO VIETNAMESE";
	s5 = "VIETNAMESE TO ENGLISH";
	s6 = "EXIT";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	LPSTR copy5 = const_cast<char*>(s5.c_str());
	LPSTR copy6 = const_cast<char*>(s6.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
	setColorBGTextXY(flag5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0, copy5);
	setColorBGTextXY(flag6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0, copy6);
}
void Menu2(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, flag6 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	if (index == 4) flag5 = true;
	if (index == 5) flag6 = true;
	s1 = "SEARCH";
	s2 = "VIEW";
	s3 = "ADD/REMOVE/EDIT";
	s4 = "RESET ORIGIN";
	s5 = "GUESS (BY USER)";
	s6 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	LPSTR copy5 = const_cast<char*>(s5.c_str());
	LPSTR copy6 = const_cast<char*>(s6.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
	setColorBGTextXY(flag5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0, copy5);
	setColorBGTextXY(flag6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0, copy6);
}
void Menu3(int index) {
	vitri = index;
	tongvitri = 3;
	string s1, s2, s3;
	bool flag1 = false, flag2 = false, flag3 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	s1 = "SEARCH FOR KEYWORD";
	s2 = "SEARCH FOR DEFINITION";
	s3 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
}
void Menu4(int index) {
	vitri = index;
	tongvitri = 4;
	string s1, s2, s3, s4;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	s1 = "VIEW HISTORY OF SEARCHING";
	s2 = "VIEW RANDOM WORD AND ITS DEFINITION";
	s3 = "VIEW FAVOURITE LIST";
	s4 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
}
void Menu5(int index) {
	vitri = index;
	tongvitri = 6;
	string s1, s2, s3, s4, s5, s6;
	bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, flag6 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	if (index == 3) flag4 = true;
	if (index == 4) flag5 = true;
	if (index == 5) flag6 = true;
	s1 = "ADD NEW WORD AND ITS DEFINITION";
	s2 = "EDIT DEFINITION OF EXISTING WORD";
	s3 = "REMOVE A WORD FROM DICTIONARY";
	s4 = "ADD A WORD TO FAVOURITE LIST";
	s5 = "REMOVE A WORD OF FAVAVOURITE LIST";
	s6 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	LPSTR copy4 = const_cast<char*>(s4.c_str());
	LPSTR copy5 = const_cast<char*>(s5.c_str());
	LPSTR copy6 = const_cast<char*>(s6.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
	setColorBGTextXY(flag4, (ConsoleWidth / 2 - s4.length() / 2), 13, 15, (index == 3) ? 2 : 0, copy4);
	setColorBGTextXY(flag5, (ConsoleWidth / 2 - s5.length() / 2), 15, 15, (index == 4) ? 2 : 0, copy5);
	setColorBGTextXY(flag6, (ConsoleWidth / 2 - s6.length() / 2), 17, 15, (index == 5) ? 2 : 0, copy6);
}
void Menu6(int index) {
	vitri = index;
	tongvitri = 3;
	string s1, s2, s3;
	bool flag1 = false, flag2 = false, flag3 = false;
	if (index == 0) flag1 = true;
	if (index == 1) flag2 = true;
	if (index == 2) flag3 = true;
	s1 = "GUESS DEFINITION FROM WORDS";
	s2 = "GUESS WORD FROM DEFINITIONS";
	s3 = "BACK";
	LPSTR copy1 = const_cast<char*>(s1.c_str());
	LPSTR copy2 = const_cast<char*>(s2.c_str());
	LPSTR copy3 = const_cast<char*>(s3.c_str());
	setColorBGTextXY(flag1, (ConsoleWidth / 2 - s1.length() / 2), 7, 15, (index == 0) ? 2 : 0, copy1);
	setColorBGTextXY(flag2, (ConsoleWidth / 2 - s2.length() / 2), 9, 15, (index == 1) ? 2 : 0, copy2);
	setColorBGTextXY(flag3, (ConsoleWidth / 2 - s3.length() / 2), 11, 15, (index == 2) ? 2 : 0, copy3);
}
void xuliphim(KEY_EVENT_RECORD key) {
	if (key.bKeyDown) {
		switch (key.wVirtualKeyCode) {
		case VK_UP:
			switch (page) {
			case 1:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu1(vitri);
				}
				break;
			case 2:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu2(vitri);
				}
				break;
			case 3:
				if (tongvitri == 3) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu3(vitri);
				}
				break;
			case 4:
				if (tongvitri == 4) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu4(vitri);
				}
				break;
			case 5:
				if (tongvitri == 6) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu5(vitri);
				}
				break;
			case 6:
				if (tongvitri == 3) {
					if (vitri == 0) {
						vitri = tongvitri - 1;
					}
					else
						vitri -= 1;
					Menu6(vitri);
				}
				break;
			}

			break;
		case VK_DOWN:
			switch (page) {
			case 1:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu1(vitri);
				}
				break;
			case 2:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu2(vitri);
				}
				break;
			case 3:
				if (tongvitri == 3) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu3(vitri);
				}
				break;
			case 4:
				if (tongvitri == 4) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu4(vitri);
				}
				break;
			case 5:
				if (tongvitri == 6) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu5(vitri);
				}
				break;
			case 6:
				if (tongvitri == 3) {
					if (vitri == tongvitri - 1) {
						vitri = 0;
					}
					else
						vitri += 1;
					Menu6(vitri);
				}
				break;
			}
			break;
		case VK_RETURN:
			switch (page) {
			case 1:
				if (vitri == 0 || vitri == 1 || vitri == 2 || vitri == 3 || vitri == 4) {
					page = 2;
					vitri = 0;
				}
				else if (vitri == 5) {
					exit(0);
				}
				break;
			case 2:
				if (vitri == 0) {
					page = 3;
				}
				else if (vitri == 1) {
					page = 4;
					vitri = 0;
				}
				else if (vitri == 2) {
					page = 5;
					vitri = 0;
				}
				else if (vitri == 3) {
					// ham reset origin

				}
				else if (vitri == 4) {
					page = 6;
					vitri = 0;
				}
				else if (vitri == 5) {
					page = 1;
					vitri = 0;
				}
				break;
			case 3:
				if (vitri == 0) {
					// ham SEARCH FOR KEYWORD
				}
				else if (vitri == 1) {
					// ham SEARCH FOR DEFINITION
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
				}
				break;
			case 4:
				if (vitri == 0) {
					// ham VIEW HISTORY OF SEARCHING

				}
				else if (vitri == 1) {
					// ham VIEW RANDOM WORD AND ITS DEFINITION

				}
				else if (vitri == 2) {
					// ham VIEW FAVOURITE LIST

				}
				else if (vitri == 3) {
					page = 2;
					vitri = 0;
				}
				break;
			case 5:
				if (vitri == 0) {
					// ham ADD NEW WORD AND ITS DEFINITION

				}
				else if (vitri == 1) {
					// ham EDIT DEFINITION OF EXISTING WORD
				}
				else if (vitri == 2) {
					// ham REMOVE A WORD FROM DICTIONARY
				}
				else if (vitri == 3) {
					// ham ADD A WORD TO FAVOURITE LIST

				}
				else if (vitri == 4) {
					// ham REMOVE A WORD OF FAVAVOURITE LIST
				}
				else if (vitri == 5) {
					page = 2;
					vitri = 0;
				}
				break;
			case 6:
				if (vitri == 0) {
					// ham GUESS DEFINITION FROM WORDS

				}
				else if (vitri == 1) {
					// GUESS WORD FROM DEFINITIONS
				}
				else if (vitri == 2) {
					page = 2;
					vitri = 0;
				}
				break;
			}

			break;
		}

	}
}
void xulisukien() {
	while (true) {
		DWORD DWNumberOfEvent = 0;
		DWORD DWNumberOfEventsRead = 0;

		HANDLE HConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
		GetNumberOfConsoleInputEvents(HConsoleInput, &DWNumberOfEvent);

		if (DWNumberOfEvent) {
			INPUT_RECORD* eventbuffer = new INPUT_RECORD[DWNumberOfEvent];
			ReadConsoleInput(HConsoleInput, eventbuffer, DWNumberOfEvent, &DWNumberOfEventsRead);

			for (DWORD i = 0; i < DWNumberOfEvent; i++) {
				if (page == 1) {
					system("cls");
					Menuchung();
					Menu1(vitri);
				}
				else if (page == 2) {
					system("cls");
					MenuHelper2();
					Menu2(vitri);
				}
				else if (page == 3) {
					system("cls");
					MenuHelper2();
					Menu3(vitri);
				}
				else if (page == 4) {
					system("cls");
					MenuHelper2();
					Menu4(vitri);
				}
				else if (page == 5) {
					system("cls");
					MenuHelper2();
					Menu5(vitri);
				}
				else if (page == 6) {
					system("cls");
					MenuHelper2();
					Menu6(vitri);
				}
				if (eventbuffer[i].EventType == KEY_EVENT) {
					xuliphim(eventbuffer[i].Event.KeyEvent);
				}
			}
		}
	}
}