#include <iostream>
#include <windows.h>
#include "robaki.h"

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

robaki::robaki()
{
	licznik++;
}

robaki::~robaki()
{
}

void robaki::print(short x, short y, char c) {
	COORD p = { x, y };
	SetConsoleCursorPosition(h, p);
	printf("%c", c);
}

void robaki::print(short x, short y, int c) {
	COORD p = { x, y };
	SetConsoleCursorPosition(h, p);
	printf("%d", c);
}
