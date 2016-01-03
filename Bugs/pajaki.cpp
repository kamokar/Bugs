#include <iostream>
#include "pajaki.h"

pajaki::pajaki()
{
	x = 40;
	y = 12;
	los = 0;
	numer = licznik++;
}

pajaki::~pajaki()
{
}

void pajaki::ruch()
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
	print(x, y, numer+5);
}
