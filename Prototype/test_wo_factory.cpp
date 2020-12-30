#include <iostream>

#include "Resume.h"
#include "TypeResume.h"

using namespace std;

int main(int argc, char ** argv){

    Resume* r1 = new ResumeInBlack("TrendMicro");
    Resume* r2 = new ResumeInWhite("Microsoft");
    Resume* r3 = r1->clone("Ring");
    Resume* r4 = r2->clone("MTK");

    r1->show();
    r2->show();
    r3->show();
    r4->show();

    delete r1;
    delete r2;
    delete r3;
    delete r4;

    return 0;
}