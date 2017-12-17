#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>

using namespace std;
double minimum(vector<double> V);
double maximum(vector<double> V);
void wczytajDaneZPliku(vector<double> &T, vector<double> &X);
double srednia(vector<double> V);
void transformata(vector<double> X);

const double PI = 3.1415;

int main()
{
	//wektory przechowujace dane z pliku
	vector<double> T;
	vector<double> X;

	wczytajDaneZPliku(T, X);
	cout << "Srednia sygnalu pomiarowego: " << srednia(X) << endl;
	cout << "Maksymalna wartosc sygnalu pomiarowego: " << maximum(X) << endl;
	cout << "Minimalna wartosc sygnalu pomiarowego: " << minimum(X) << endl;
	transformata(X);
	cout << endl;
    return 0;
}
double minimum(vector<double>  V) //wyznaczanie minimalnej wartosci zbioru
{
	double min = 0;
	for (int i = 0; i < V.size(); i++){
		if (i == 0) min = V[i];
		else if (min > V[i]) min = V[i];
	}
	return min;
}
double maximum(vector<double> V) // wyznaczanie maxymalnej wartosci zbioru
{
	double max = 0;
	for(int i = 0; i < V.size(); i ++){
		if (i == 0) max = V[i];
		else if (max < V[i]) max = V[i];
	}
	return max;
}
void transformata(vector<double> X) // obliczenie i wyswietlenie szybkiej transformaty Fouriera
{
	vector<double> Xre;
	vector<double> Xim;
	for (int i = 0; i < X.size(); i++) { Xre.push_back(0); Xim.push_back(0); } //wypelniam wektor zerami
	for (int i = 0; i < X.size(); i++){
		for (int j = 0; j < X.size(); j++){
			Xre[i] += X[j] * cos(j * i * PI * 2 / X.size());
		}

		for (int j = 0; j < X.size(); j++){
			Xim[i] -= X[j] * sin(j * i * PI * 2 / X.size());
		}
		cout << "DFT dla " << i << " probki = " << Xre[i] << "+" << Xim[i] << "i" << endl;
	}
}
void wczytajDaneZPliku(vector<double> &T, vector<double> &X) //wczytanie danych z pliku
{
	ifstream plik;
	plik.open("dane.txt");
	double a = 0, b = 0; //zmienne pomocnicze do pobierania danych a - czas, b - pomiar
	while (true){
		plik >> a >> b;
		if (plik.good()){
			T.push_back(a);
			X.push_back(b);
		}
		else break;
	}
	plik.close();
}
double srednia(vector<double> V){
	double sum = 0;
	for (int i = 0; i < V.size(); i++){
		sum += V[i];
	}
	return sum / static_cast<double>(V.size());
}
