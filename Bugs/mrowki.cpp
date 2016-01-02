#include <iostream>
#include <windows.h>
#include "mrowki.h"

HANDLE h1 = GetStdHandle(STD_OUTPUT_HANDLE);
void mrowki::print(short x, short y, char c) {
	COORD p = { x, y };
	SetConsoleCursorPosition(h1, p);
	printf("%c", c);
}

void mrowki::print(short x, short y, int c) {
	COORD p = { x, y };
	SetConsoleCursorPosition(h1, p);
	printf("%d", c);
}

mrowki::mrowki()
{
	x = 40;
	y = 12;
	los = 0;
	static int licznikm;
	numer = licznikm++;
}


mrowki::~mrowki()
{
}

void mrowki::ruch()
{
	print(x, y, ' ');
	los = rand() % 3 - 1;
	x += los;
	if (x < 0) x = 0;
	if (x > 79) x = 79;
	los = rand() % 3 - 1;
	y += los;
	if (y < 0) y = 0;
	if (y > 23) y = 23;
	print(x, y, numer);
}