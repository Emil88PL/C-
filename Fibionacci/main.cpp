#include <iostream>
#include <iomanip>
using namespace std;

long double fib[100000];
int n;

int main()
{
    cout << "How many Fibionacci: ";
    cin >> n;

    fib[0]=1;
    fib[1]=1;

    for (int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout <<setprecision(10000);

    // Aby wypisac na ekranie wszystkie petla for

    // for (int i=0; i<n; i++)
   // {
   //     cout << endl<<"Wyraz nr"<<i+1<<": "<<fib[i];
   // }

   //Aby pokazac jedna wybrana 23601
    cout<<endl<<"Wyraz nr "<<n<<":"<<fib[n-1];

    //Aby obliczyc zlota liczbe

    //cout<<"zlota liczba: " <<fib[n-1]/fib[n-2];
    return 0;
}
