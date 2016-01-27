#pragma once
#include "robaki.h"
class muchy :
	public robaki
{
	int x;
	int y;
	void ruch();
	int numer;


public:
	muchy();
	~muchy();
	static int licznik;
};

