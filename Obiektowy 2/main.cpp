#include <iostream>

using namespace std;

class Samochod
{
    public:
    // atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;
    // metody
    void wczytaj()
    {
        cout<<"Dodawanie nowego samochodu do bazy: "<<endl;
        cout<<"Podaj marke: ";
        cin>>marka;
        cout<<"Podaj model: ";
        cin>>model;
        cout<<"Podaj rocznik: ";
        cin>>rocznik;
        cout<<"Podaj przebieg: ";
    }
    void wypisz()
    {
        if(marka == "Mercedes") cout<<marka<<" z: "<<rocznik<<": Mial!";
        else if(marka == "BMW") cout<<marka<<" z: "<<rocznik<<": Beee!";
        else if(marka == "Audi") cout<<marka<<" z: "<<rocznik<<": Muuu!";
        else cout<<"Nie znana marka.";
    }

};


int main()
{
    Samochod s1;
    s1.wczytaj();
    s1.wypisz();

    Samochod s2;

    return 0;
}
