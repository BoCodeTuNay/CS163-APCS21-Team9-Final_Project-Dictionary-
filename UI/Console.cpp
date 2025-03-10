﻿#include "Console.h"

HANDLE hConsoleOutput;
int vitri;
int tongvitri;
int page;

void Clrscr(void)
{
	system("cls");
}

void Gotoxy(short x, short y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x,y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// Doi mau text
void SetTextColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

// Doi mau background
void SetBGColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

// Ham giup viec cho Print(), khong su dung ham nay
void Print(string str, int x, int y, int color, int background)
{
	Gotoxy(x, y);
	SetTextColor(color);
	SetBGColor(background);
	cout << str;
	SetTextColor(7);
	SetBGColor(0);
}

// Tu dong xuong hang cho string qua dai
void PrintLong(string str, int x, int& y, int color, int background)
{
	istringstream ss(str);
	string token;

	int xTmp = x;
	while (getline(ss, token, ' ')) {
		if (x + token.size() > ConsoleWidth)
		{
			x = xTmp;
			++y;
		}
		Print(token + ' ', x, y, color, background);
		x += token.size() + 1;
	}
}

// Tu dong xuong hang cho string qua dai (toi da 1 dong)
void PrintLongAtMost1Line(string str, int x, int& y, int color, int background) 
{	
	int len = str.length();
	int temp = ConsoleWidth - x;
	if (str.length() > temp) {
		str.erase(temp - 4, len - temp + 4);
		str.push_back('.');
		str.push_back('.');
	}	
	istringstream ss(str);
	string token;
	int xTmp = x;
	while (getline(ss, token, ' ')) {
		if (x + token.size() > ConsoleWidth)
		{		
			x = xTmp;
			++y;
		}
		Print(token + ' ', x, y, color, background);
		x += token.size() + 1;
	}
}

// Tu dong xuong hang cho string qua dai (toi da 2 dong)
void PrintLongAtMost2Line(string str, int x, int& y, int color, int background) 
{	
	int len = str.length();
	int temp = ConsoleWidth - x;
	if (str.length() > 2 * temp) {
		str.erase(2 * temp - 10, len - 2 * temp + 10);
		str.push_back('.');
		str.push_back('.');
	}	
	istringstream ss(str);
	string token;
	int xTmp = x;
	while (getline(ss, token, ' ')) {
		if (x + token.size() > ConsoleWidth)
		{		
			x = xTmp;
			++y;
		}
		Print(token + ' ', x, y, color, background);
		x += token.size() + 1;
	}
}

// Format de in ra word trong muc view History, Favourite List
void PrintLongForWord(string str, int x, int y, int color, int background) {
	istringstream ss(str);
	string token;

	int xTmp = x;
	while (getline(ss, token, ' ')) {
		if (x + token.size() > 35)
		{
			x = xTmp;
			++y;
		}
		Print(token + ' ', x, y, color, background);
		x += token.size() + 1;
	}
}

void SetCursor(bool visible)
{
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = visible;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void SetWindowSize(SHORT width, SHORT height)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT WindowSize;
	WindowSize.Top = 0;
	WindowSize.Left = 0;
	WindowSize.Right = width;
	WindowSize.Bottom = height;

	SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}

// Disable zoom, minimize, close
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

void DisableResizeWindow()
{
	HWND hWnd = GetConsoleWindow();
	SetWindowLong(hWnd, GWL_STYLE, GetWindowLong(hWnd, GWL_STYLE) & ~WS_SIZEBOX);
}

void ShowScrollbar(BOOL Show)
{
	HWND hWnd = GetConsoleWindow();
	ShowScrollBar(hWnd, SB_BOTH, Show);
}

void show_console_cursor(const bool show) {
#if defined(_WIN32)
	static const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(handle, &cci);
	cci.bVisible = show; // show/hide cursor
	SetConsoleCursorInfo(handle, &cci);
#elif defined(__linux__)
	cout << (show ? "\033[?25h" : "\033[?25l"); // show/hide cursor
#endif // Windows/Linux
}

void eraseLines(int count) {
	if (count > 0) {
		std::cout << "\x1b[2K"; // Delete current line
		// i=1 because we included the first line
		for (int i = 1; i < count; i++) {
			std::cout
				<< "\x1b[1A" // Move cursor up one
				<< "\x1b[2K"; // Delete the entire line
		}
		std::cout << "\r"; // Resume the cursor at beginning of line
	}
}