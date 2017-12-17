#include "1_Biblioteki.h"
#include "2_Funkcje.cpp"

void Wyswietl(double, double, double);
int main()
{
	double r, h;
	cout << "Podaj promien podstawy walca: ";
	cin >> r;
	cout << "Podaj wysokosc walca: ";
	cin >> h;

	Wyswietl(M_PI, r, h);
	return 0;
}

void Wyswietl(double pi, double r, double h)
{
	cout << "Objetosc walca: " << ObjetoscWalca(pi, r, h)<<endl;
	cout << "Pole powierzchni walca: " << PolePowierzchniWalca(pi, r, h) << endl;
}
