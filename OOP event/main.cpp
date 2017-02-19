#include <iostream>
#include "event.h"
using namespace std;

int main()
{
    Event w1("New Job",20,2,2017,7,13);//no need if set default
    Event w2("Wedding");
    w1.show();
    w2.show();
    return 0;
}
