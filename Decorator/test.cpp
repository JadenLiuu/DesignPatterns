#include <iostream>
#include <Decorator.h>
#include <Giant.h>
using namespace std;

int main(int argv, char ** argc){
    Giant* alen = new Giant("Alen", "None");

    Power* yumiru = new OriginGiant();
    Power* annie = new WomanGiant();
    Power* linar = new ArmoredGiant();
    
    yumiru->be_eaten(alen);
    annie->be_eaten(yumiru);
    linar->be_eaten(annie);
    linar->introuduce();

    delete alen;
    delete yumiru;
    delete annie;
    delete linar;

    return 0;
}