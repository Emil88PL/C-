#include <iostream>
#include <cmath>
using namespace std;

float kat;

int main()
{
    cout << "Wartosc kat: " << endl;
    cin >> kat;

    cout <<"Sinus: "<<sin (kat * M_PI/180)<<endl;
cout <<"Cosinus: "<<cos (kat * M_PI/180)<<endl;
cout <<"Tanges: "<<tan (kat * M_PI/180)<<endl;
cout <<"Cotanges: " <<1/ tan (kat * M_PI/180)<<endl;

    return 0;
}
