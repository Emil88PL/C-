#include <iostream>
#include "event.h"
using namespace std;

void Event::load(){
    cout<<endl<<"Name of Event: ";
    cin>>name;
    cout<<endl<<"Day: ";
    cin>>day;
    cout<<endl<<"Month: ";
    cin>>month;
    cout<<endl<<"Year: ";
    cin>>year;
    cout<<endl<<"Hour: ";
    cin>>hour;
    cout<<endl<<"Minutes: ";
    cin>>minutes;
}

void Event::show(){
    cout<<endl<<name<<" "<<day<<"."<<month<<"."<<year<<" "<<hour<<":"<<minutes<<endl;
}


Event::Event(string n,int d,int m, int y,int h,int mins){

    name = n;
    day = d;
    month = m;
    year = y;
    hour = h;
    minutes = mins;
}

Event::~Event(){
    cout<<endl<<"End";
}



