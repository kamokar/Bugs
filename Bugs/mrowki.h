#pragma once
#include "robaki.h"
class mrowki : public robaki
{
public:
	void print(short x, short y, char c);
	void print(short x, short y, int c);
	mrowki();
	~mrowki();
	int x;
	int y;
	void ruch();
	int numer;
	int los;
};

