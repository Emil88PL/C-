#include <iostream>

using namespace std;

int lat;

int main()
{
    cout << "Ile masz lat: ";
    cin >> lat;

    if (lat < 18){
        cout << "Jestes niepelno letni i nie mozesz kandydowac na prezydenta";
    }else if ((lat >= 18) && (lat < 35))
    {
        cout << "jestes pelnoletni ale nie mozesz kandydowac na prezydenta";
    }
    else
    {
        cout << "Jestes pelnoletni i mozesz kandydowac na prezydenta";
    }

    return 0;
}
