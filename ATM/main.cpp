#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Welcome at ATM" << endl;
    cout << "Please type in your PIN; ";
    cin >> PIN;

    if(PIN == "1729")
    {
        cout << "Correct!";
    }else
    {
        cout << "Incorrect!";
    }
    return 0;
}
