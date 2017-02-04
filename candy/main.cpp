#include <iostream>

using namespace std;

int cukierki, uczniow,x,y;

int main()
{
    cout << "Ile mama kupila cukierkow: ";
    cin >> cukierki;

    cout << "Ile uczniow jest w klasie: ";
    cin >> uczniow;

    x = cukierki / (uczniow-1);
    cout << "Cukierow dla kazdego ucznia: " << x << endl;
    y = cukierki - x * (uczniow-1);
    cout << "Dla jasia na wieczor: " << y;

    return 0;
}
