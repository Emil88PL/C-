#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int a,b,c,d,e,fa,fb,fc,fd,fe,s,x;


int main()
{
    cout << "Podaj 5 cyfr rozdzielonych spacja: "<<endl;;
    cin >> a>>b>>c>>d>>e;

    s= (a+b+c+d+e)/5;

    cout<< "Srednia liczb: "<<s<<endl;


    fa = s % a;
    fb = s % b;
    fc = s % c;
    fd = s % d;
    fe = s % e;

   // ??????????????????????????????????????????????????????????????????

        x=fa;
    if (fb<x) x=fb;
    if (fc<x) x=fc;
    if (fd<x) x=fd;
    if (fe<x) x=fe;


    cout<< "Najblizsza sredniej jest liczba: "<<endl<<" 1: "<<fa<<endl<<" 2: "<<fb<<endl<<" 3: "<<fc<<endl<<" 4: "<<fd<<endl<<" 5: "<<fe<<endl<<endl<<endl<<endl<<" Ta naj: "<< x<<endl;




    return 0;
}
