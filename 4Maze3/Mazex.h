#include <iostream>
#include <ctime> 
#include <Windows.h> 
#include <conio.h> 
#include <string>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); 


void SetCursor(int x,int y, int color, string text)
{
    

    COORD position;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, color);
    cout << text;
}

void System(const char* Command)
{
    system(Command);
}

void MazePR()
{
    CONSOLE_CURSOR_INFO info;
    info.bVisible = false;
    info.dwSize = 100; // 1...100
    SetConsoleCursorInfo(h, &info);
}

void MassageBox(int a,LPCSTR text, LPCSTR text2)
{
    MessageBoxA(0, text, text2, MB_OK);
}


void Finish()
{
    system("cls");
    main();
    Sleep(INFINITE);
}