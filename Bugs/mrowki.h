#pragma once
#include "robaki.h"

class mrowki : public robaki
{
	int x;
	int y;
	void ruch();
	int numer;

public:
	mrowki();
	~mrowki();
	static int licznik;
};

