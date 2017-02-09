#include <iostream>
#include <fstream> //cooperation with files

using namespace std;

string firstname, lastname;
int phone;

int main()
{
    cout << "Your firstname: ";
    cin >> firstname;
    cout << "Your lastname: ";
    cin >> lastname;
    cout << "Yout phone: ";
    cin >> phone;

    fstream file;
    file.open("data.txt", ios::out | ios::app); //ios::app - dopisywanie do pliku

    file << firstname << endl;
    file << lastname << endl;
    file << phone << endl;

    file.close();

    return 0;
}
