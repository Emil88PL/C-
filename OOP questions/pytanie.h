#include <iostream>

using namespace std;

class Pytanie{
public:
    string tresc;
    string a,b,c,d;
    int nr_pytania;
    string poprawna;
    string odpowiedz;
    int punkt; // 1 poprawna 0 z�a

    void wczytaj(); // wczytuje z cpp
    void zadaj();// pokazuje pytanie;
    void sprawdz();
};
