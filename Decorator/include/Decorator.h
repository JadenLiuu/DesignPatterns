#ifndef DECORATOR_H
#define DECORATOR_H
#include <Giant.h>

class Power : public Giant {
    Giant* eaten_giant;
public:
    Power(string n, string p) : Giant(n, p) {};
    virtual void be_eaten(Giant* a){
        eaten_giant = a;
    }
    virtual void introuduce() override {
        if(nullptr != eaten_giant){
            eaten_giant->introuduce();
        }
    }
};

class OriginGiant : public Power{
public:
    OriginGiant(): Power("Yumiru", "POINTER!") {};
    virtual void introuduce() final{
        Power::introuduce();
        cout << this->power << " from " << this->name << endl;
    }
};

class ArmoredGiant : public Power{
public:
    ArmoredGiant(): Power("Linar", "Split Personality!") {};
    virtual void introuduce() final{
        Power::introuduce();
        cout << this->power << " from " << this->name << endl;
    }
};

class WomanGiant : public Power{
public:
    WomanGiant(): Power("Annie", "MARTIAL-ATTACK!") {};
    virtual void introuduce() final{
        Power::introuduce();
        cout << this->power << " from " << this->name << endl;
    }
};
#endif
