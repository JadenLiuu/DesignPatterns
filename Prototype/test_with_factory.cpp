#include <iostream>

#include "Factory.h"

using namespace std;

int main(int argc, char ** argv){

    Factory f;
    Resume* r1 = f.construct("TrendMicro", Factory::BLACK);
    Resume* r2 = f.construct("Microsoft", Factory::WHITE);
    Resume* r3 = f.construct("Ring", Factory::BLACK);
    Resume* r4 = f.construct("MTK", Factory::WHITE);

    r1->show();
    r2->show();
    r3->show();
    r4->show();

    delete r1;
    delete r2;
    return 0;
}