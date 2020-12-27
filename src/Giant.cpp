#include <Giant.h>

Giant::Giant(string name, string power){
    this->name = name;
    this->power = power;
}

void Giant::introuduce() {
    cout << "I am giant " << name << endl;
    cout << "I got power of these giants: " << endl;
};