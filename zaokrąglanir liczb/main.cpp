#include <iostream>
#include <cmath>

using namespace std;

float liczba;


int main()
{
    cout << "liczba: " << endl;
    cin >> liczba;

    cout << "Round: "<<round(liczba)<<endl;
    cout << "Ceil: "<<ceil(liczba)<<endl;
    cout << "Floor: "<<floor(liczba)<<endl;
    cout << "Truncate: "<<trunc(liczba)<<endl;
    return 0;
}
/*
// zaokr¹glanie
liczba roeun() floor() ceil()
 2.3      2       2       3
-2.3     -2      -3      -2
 4.9      5       4       5
-4.9     -5      -5      -4
*/
// i 4 funkcja trunc() od truncate = obci¹æ;
