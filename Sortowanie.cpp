#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;
void wprowadzanie_danych ();
void sortowanie_liczb();
void wyswietlanie_wyniku();
int n;
int m;
float liczba;
vector <float> dane_rosnaco;
vector <float> dane_malejaco;

int main(){
wprowadzanie_danych();
sortowanie_liczb();
wyswietlanie_wyniku();
return 0;
}

void wprowadzanie_danych (){
    cout << "Podaj ilosc liczb: ";
    cin >> n;
    cout<<endl;
    cout << "Wprowadz liczby:" << endl;

    for(int i=0; i<n; i++){
        cin >> liczba;
        dane_rosnaco.push_back(liczba);
    }
    dane_malejaco=dane_rosnaco;
}

void sortowanie_liczb(){
vector<float>::iterator is1;
vector<float>::iterator ie1;
vector<float>::iterator is2;
vector<float>::iterator ie2;
is1 = dane_rosnaco.begin();
ie1 = dane_rosnaco.end();
is2 = dane_malejaco.begin();
ie2 = dane_malejaco.end();
sort(is1, ie1);
sort(is2, ie2, greater <float>());
}

void wyswietlanie_wyniku(){
    cout <<"\nKolejnosc wyswietlania(1 - rosnaco, 2 - malejaco): ";
    cin >> m;
    if (m != 1 && m != 2)  {
    cout << "\nNieprawidlowa kolejnosc wyswietlania!: ";
    cin >> m;
    }
    if (m == 1){
    cout << "\nLiczby w kolejnosci rosnacej:" <<endl;
    for( int i = 0; i < dane_rosnaco.size(); i++ )
         cout << dane_rosnaco[ i ] << '\n';
    }
    if (m == 2) {
    cout << "\nLiczby w kolejnosci malejacej:"<<endl;
    for( int j = 0; j < dane_malejaco.size(); j++ )
         cout << dane_malejaco[ j ] << '\n';
    }
}
