#include <iostream>
#include <windows.h>
#include "pajaki.h"
#include "mrowki.h"
using namespace std;

int main()
{
	const int ilosc = 5;
	int licznik = 0;
	robaki *robak;
	pajaki *pajak[ilosc];
	mrowki *mrowka[ilosc];
	srand(0);

	for (int i = 0; i < ilosc; i++)
	{
		pajak[i] = new pajaki;
		mrowka[i] = new mrowki;
	}

	while(true)
	for (int i = 0; i < ilosc; i++)
	{
		robak = pajak[i];
		robak->ruch();
		robak = mrowka[i];
		robak->ruch();


		Sleep(50);
		}























	getchar();
	return 0;
}

