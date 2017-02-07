#include <iostream>
#include <stdio.h> // zeby dzialal exit
#include <cstdlib> // czysczenie ekranu
#include <conio.h> // dzialanie bez enter
using namespace std;

float x,y;
char wybor;

int main()
{
for(;;)
    // while (wybor !=5);
    // while (true);
{
    cout << "Podaj 1 liczbe: ";
    cin >> x;
    cout << "Podaj 2 liczbe: ";
    cin >> y;

    cout <<endl;
    cout << "Menu Glowne " << endl;
    cout << "----------------- " << endl;
    cout << "1. Dodawanie " << endl;
    cout << "2. Odejmowanie " << endl;
    cout << "3. Mnozenie " << endl;
    cout << "4. Dzielenie " << endl;
    cout << "5. Koniec " << endl;

    cout << endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
        cout << "Suma = "<< x+y;
        break;
    case '2':
        cout << "Roznica = "<<x-y;
        break;
    case '3':
        cout << "Iloczyn = "<<x*y;
        break;
    case '4':
        if (y == 0) cout << "nie dzielimy prez zero";
        else cout << "Iloraz = "<<x/y;
        break;
    case '5':
        exit(0);
        break;
    default:
        cout << "Nie ma takiego tego!";
    }
    // zeby zaczekac na enter
    getchar();getchar();
    //zeby wyczyscic ekran
    system("cls");
}
    return 0;
}
