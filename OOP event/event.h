#include <iostream>

using namespace std;

class Event{

    private:

    int day, month, year;
    int hour,minutes;
    string name;

    public:

    Event(string="Event name",int=7,int=7,int=2017,int=7,int=17); //set default
    ~Event();
    void load();
    void show();


};
