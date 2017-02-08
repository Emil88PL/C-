#include <iostream>

using namespace std;

string login, password;


int main()
{
    cout << "Your login: ";
    cin >> login;

    cout << "Your password: ";
    cin >> password;

    if ((login == "admin") && (password == "szarlotka"))
    {
        cout << "Correct!";
    }
    else
    {
        cout << "Check your login or password!";
    }

    return 0;
}
