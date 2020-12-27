#ifndef GIANT_H
#define GIANT_H

#include <string>
#include <iostream>
using namespace std;

class Giant {
public:    
    string name;
    string power;
    Giant(string name="", string power="");

    ///// got a public function as a baseline.
    ///// It could be decorated or NOT decorated. Both are fine!
    virtual void introuduce();
};
#endif
