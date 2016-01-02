#pragma once
#include "robaki.h"
class pajaki : public robaki
{
public:
	void print(short x, short y, char c);
	void print(short x, short y, int c);
	pajaki();
	~pajaki();
	int x;
	int y;
	void ruch();
	int numer;
	int los;
};

