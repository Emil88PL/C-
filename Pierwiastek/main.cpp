#include <iostream>
#include <cmath>

using namespace std;

float x_1,x_2,y_1,y_2,d;

int main()
{
    cout<<pow(27,1.0/3.0)<<endl;
   // to samo co u gory
   // cout << cbrt(27)<<endl;


    cout << "A (x1, y1) = " << endl;
    cin >> x_1>>x_2;
    cout << "B (x2, y2) = " << endl;
    cin >> x_2>>x_2;
// odleg�o�� dwoch punkt�w na p�aszczy�inie
    d = sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
// odleg�o�� dw�ch punkt�w na przestrzeni 3d
// d = sqrt(pow(x1-x2,2)+pow(x2-x1,2)+pow(z2-z1,2));
    cout <<d<<endl;

    return 0;
}
