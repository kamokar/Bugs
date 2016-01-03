#pragma once
#include "robaki.h"
class pajaki : public robaki
{
	int x;
	int y;
	void ruch();
	int numer;
	int los;

public:
	pajaki();
	~pajaki();
	static int licznik;
};

