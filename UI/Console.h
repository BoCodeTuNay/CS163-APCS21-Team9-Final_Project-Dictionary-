#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
#include <Windows.h>
#include <Shlwapi.h>

using namespace std;

#define ConsoleWidth 80
#define ConsoleHeight 35

extern HANDLE hConsoleOutput;
extern int vitri; // vi tri moi dong 
extern int tongvitri; // tong vi tri trong trang do
extern int page; // so trang

void Clrscr(void);

void Gotoxy(short x, short y);

// Doi mau text
void SetTextColor(WORD color);

// Doi mau background
void SetBGColor(WORD color);

// In ra man hinh 1 string, set toa do, mau chu, mau phong cua string do
void Print(string str, int x, int y, int color, int background);

// Tu dong xuong hang cho string qua dai
void PrintLong(string str, int x, int y, int color, int background);

void SetCursor(bool visible);

void SetWindowSize(SHORT width, SHORT height);

// Disable zoom, minimize, close
void DisableCtrButton(bool Close, bool Min, bool Max);

void DisableResizeWindow();

void ShowScrollbar(BOOL Show);

