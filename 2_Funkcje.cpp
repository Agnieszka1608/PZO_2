#include "1_Biblioteki.h"
double ObjetoscWalca(double pi, double r, double h)
{
return (pi*r*r)*h; //Obliczenie objetosci
}
double PolePowierzchniWalca(double pi, double r, double h)
{
return ((2 * (pi*r*r)) + (2 * pi*r*h)); //Obliczenie pola powierzchni
}
