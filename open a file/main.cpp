#include <iostream>
#include <fstream> //cooperation with files
#include <cstdlib> // for exit

using namespace std;

string firstname, lastname;
int phone;

int main()
{

    string line;
    int nr_line = 1;

    fstream file;
    file.open("data.txt", ios::in );

    if (file.good() == false)
    {
        cout << "File dosn't exist!";
        exit(0);
    }


    while (getline(file, line))
    {
        switch(nr_line)
        {
            case 1: firstname = line; break;
            case 2: lastname = line; break;
            case 3: phone = atoi(line.c_str()); break;
        }
        nr_line++;
    }

    file.close();

    cout << firstname << endl;
    cout << lastname << endl;
    cout << phone << endl;

    return 0;
}
// somehow working

/*

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{

    string linia;
    int nr_linii=1;

    fstream plik;
    plik.open("wizytowka.txt", ios::in);

    if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
            case 1: imie=linia; break;
            case 2: nazwisko=linia; break;
            case 3: nr_tel=atoi(linia.c_str()); break;
        }
        nr_linii++;
    }

    plik.close();

    cout<<"imie: "<<imie<<endl;
    cout<<"nazwisko: "<<nazwisko<<endl;
    cout<<"telefon: "<<nr_tel<<endl;

    return 0;
}

*/
