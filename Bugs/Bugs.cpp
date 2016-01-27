#include <iostream>
#include <windows.h>
#include "pajaki.h"
#include "mrowki.h"
#include "muchy.h"
using namespace std;

int mrowki::licznik = 0;
int pajaki::licznik = 0;
int muchy::licznik = 0;
int robaki::licznik = 0;

int main()
{
	const int ilosc = 10;
	robaki *robak;
	pajaki *pajak[ilosc];
	mrowki *mrowka[ilosc];
	muchy *mucha[ilosc];

	for (int i = 0; i < ilosc; i++)
	{
		pajak[i] = new pajaki;
		mrowka[i] = new mrowki;
		mucha[i] = new muchy;
	}
	cout << "Mrowek: " << mrowki::licznik << endl;
	cout << "Pajakow: " << pajaki::licznik << endl;
	cout << "Much: " << muchy::licznik << endl;
	cout << "Robakow: " << robaki::licznik << endl;
	while(true)
	for (int i = 0; i < ilosc; i++)
	{
		robak = pajak[i];
		robak->ruch();
		robak = mrowka[i];
		robak->ruch();
		robak = mucha[i];
		robak->ruch();

		Sleep(2);
	}























	getchar();
	return 0;
}

