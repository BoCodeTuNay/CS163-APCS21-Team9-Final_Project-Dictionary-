#pragma once

#include <iostream>
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

// Bam vao key de dung chuong trinh
void WaitKey();

// Ham thay doi kich co của khung cmd voi tham so truyen vao la chieu cao, chieu rong
void resizeConsole(int width, int height);

// Ham to mau
void textcolor(int x);

// Ham thay doi font chu
void textFont();
void textFont2();

// Ham dich chuyen con tro den toa do x, y
void gotoxy(int x, int y);

// Ham xoa man hinh
void XoaManHinh();

// To mau chu roi doi ve mac dinh
void ToMau(int x, int y, string a, int color);

void DisableResizeWindow();

void ShowScrollbar(BOOL Show);

// Disable zoom, minimize, close
void DisableCtrButton(bool Close, bool Min, bool Max);

// Viet tieng viet
BOOL WINAPI SetConsoleOutputCP(
	_In_ UINT wCodePageID
);

// Tao tieu de 
BOOL WINAPI SetConsoleTitle(
	_In_ LPCTSTR lpConsoleTitle
);

// An hien con tro
void ShowCur(bool CursorVisibility);

// Doi mau background
void setBackgroundColor(WORD color);

// Reset color
WORD textattr();
void resettextattr();

// Doi mau background + chu
void setColorBGTextXY(bool flag, SHORT x, SHORT y, WORD color, WORD background, LPSTR str, ...);


