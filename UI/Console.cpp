#include "Console.h"

HANDLE hConsoleOutput;
int vitri;
int tongvitri;
int page;

// Bam vao key de dung chuong trinh
void WaitKey()
{
	cout << endl << endl << endl << "\t\t\tPress any key";
	while (_kbhit()) _getch(); // Empty the input buffer
	_getch(); // Wait for a key
	while (_kbhit()) _getch(); // Empty the input buffer (some keys sends two messages)
}

// Ham thay doi kich co của khung cmd voi tham so truyen vao la chieu cao, chieu rong.
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

// Ham to mau
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

// Ham thay doi font chu
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

// Ham dich chuyen con tro den toa do x, y
void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x - 1,y - 1 };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// Ham xoa man hinh
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

// To mau chu roi doi ve mac dinh
void ToMau(int x, int y, string a, int color)
{
	gotoxy(x, y);
	textcolor(color);
	cout << a;
	textcolor(7);
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

// Viet tieng viet
BOOL WINAPI SetConsoleOutputCP(
	_In_ UINT wCodePageID
);

// Tao tieu de 
BOOL WINAPI SetConsoleTitle(
	_In_ LPCTSTR lpConsoleTitle
);

// An hien con tro
void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConCurInf;

	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = CursorVisibility;

	SetConsoleCursorInfo(handle, &ConCurInf);
}

// Doi mau background
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

// Reset color
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

// Doi mau background + chu
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
