#include <iostream>

using namespace std;


class Kszlt{
public:
    virtual void oblicz_pole()=0;
    //czysta funckja virtualna
};

//------------------------------

class Kolo:public Kszlt{
        float r;
    public:
        Kolo(float x){
        r=x;
        }
    virtual void oblicz_pole(){
    cout<<"Pole kola: "<<3.14*r*r<<endl;
    }
};

//----------------------------------

class Kwadrat:public Kszlt{
    float a;
public:
    Kwadrat(float x){
    a=x;
    }
    virtual void oblicz_pole(){
    cout<<"Pole kwadratu: "<<a*a<<endl;
    }
};

//----------------------------------------

void obliczenia(Kszlt *x){
x->oblicz_pole();
}


int main()
{
    Kolo k(1);
    Kwadrat kw(2);


    Kszlt *wsk;

    wsk = &k;
    wsk->oblicz_pole();

    wsk = &kw;
    wsk->oblicz_pole();

    obliczenia(wsk);

    return 0;
}
