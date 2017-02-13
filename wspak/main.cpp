#include <iostream>

using namespace std;

int main()
{
    string wyraz;

    cout<<"Podaj wyraz, ktory napisze wspak: "<<endl;
    cin>>wyraz;

    int dlugosc = wyraz.length();

    for(int i=dlugosc-1; i>=0 ;i--)
    {
        cout<<wyraz[i];
    }
        //getline(cin,wyraz); zapisywanie spacji

    return 0;
}
