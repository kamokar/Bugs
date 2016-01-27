#pragma once
#include "robaki.h"

class pajaki : public robaki
{
	int x;
	int y;
	void ruch();
	int numer;

public:
	pajaki();
	~pajaki();
	static int licznik;
};

