#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <Shlwapi.h>

using namespace std;

#define ConsoleWidth 80
#define ConsoleHeight 35

extern HANDLE hConsoleOutput;
extern int vitri; // vị trí mỗi dòng 
extern int tongvitri; // tổng vị trí trong trang đó
extern int page; // số trang

// bam vao key de dung chuong trinh
void WaitKey();

// Hàm thay đổi kích cỡ của khung cmd với tham số truyền vào là chiều cao, chiều rộng.
void resizeConsole(int width, int height);

// Hàm tô màu.
void textcolor(int x);

// font chu
void textFont();
void textFont2();

// Hàm dịch chuyển con trỏ đến tọa độ x, y.
void gotoxy(int x, int y);

// Hàm xóa màn hình.
void XoaManHinh();

// Tô màu chữ rồi đổi về mặc định
void ToMau(int x, int y, string a, int color);

//disable resize window
void DisableResizeWindow();

//true: hien, false: an
void ShowScrollbar(BOOL Show);

//disable zoom, minimize, close
void DisableCtrButton(bool Close, bool Min, bool Max);

//viết tiếng viêt
BOOL WINAPI SetConsoleOutputCP(
	_In_ UINT wCodePageID
);

//tạo tiêu đề 
BOOL WINAPI SetConsoleTitle(
	_In_ LPCTSTR lpConsoleTitle
);

//ẩn hiện con trỏ
void ShowCur(bool CursorVisibility);

//đổi màu background
void setBackgroundColor(WORD color);

//reset color
WORD textattr();
void resettextattr();

//tô màu chữ + màu nền
void setColorBGTextXY(bool flag, SHORT x, SHORT y, WORD color, WORD background, LPSTR str, ...);

// vẽ menu
void Menuchung();
void MenuHelper2();
void Menu1(int index);
void Menu2(int index);
void Menu3(int index);
void Menu4(int index);
void Menu5(int index);
void Menu6(int index);

// xử lí sự kiện bàn phím

void xuliphim(KEY_EVENT_RECORD key);
void xulisukien();
