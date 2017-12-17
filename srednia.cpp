#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, i; //Deklaracja zmiennych
    cout << "Podaj liczbe ocen: "; //Podanie liczby ocen
    cin >> n;
    float tab[n], srednia = 0;

    while(n>10 || n<1){
        cout << "Nieprawidlowa liczba ocen!" <<endl;
        cout << "Podaj liczbe ocen: ";
        cin>>n;
    }
    if (n>=1 && n<=10) //Ograniczenie maksymalnej liczby pozycji do 10
        {
    for (int i = 1; i<=n; i++){
        cout << "Ocena " << i << ": "; //Wpisanie ocen
        cin >> tab[i];
    while (tab[i]>5||tab[i]<2||tab[i]==2.5) //Podanie zakresu ocen
        {
        cout << "Niewlasciwa ocena!" <<endl; //Wyświetlenie informacji o wpisaniu liczby spoza zakresu
        cout << "Ocena " << i << ": ";
        cin >> tab[i];
    }
    srednia=srednia+tab[i]; //Zsumowanie wszystkich liczb
    }
    }
    srednia=srednia/n; //Obliczenie średniej arytmetycznej

    cout << "Srednia arytmetyczna " << n << " liczb wynosi: " << srednia << endl; //Wyświetlenie wyniku
    system("pause");
    return(0);
}
