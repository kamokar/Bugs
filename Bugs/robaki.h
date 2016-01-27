#pragma once

class robaki
{
public:
	static int licznik;
	robaki();
	virtual ~robaki();
	virtual void ruch() = 0;

protected:
	void print(short x, short y, char c);
	void print(short x, short y, int c);
};
