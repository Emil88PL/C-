#include <iostream>

using namespace std;

float metry; //liczba z przecinkiem


float ile_cali(float m);
float ile_jardow(float j);

void ile_mil (float m)
{
  cout << "Na mile: "<<m*0.0006213;
};


int main()
{
    cout<<"Podaj ile metrow: ";
    cin>>metry;

    cout<<"W calach: "<<ile_cali(metry)<<endl;
    cout<<"W jardach: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);
    return 0;
}

float ile_cali(float m){
    return m*39.37;
};
float ile_jardow(float j){
  return j*1.0936;
};
