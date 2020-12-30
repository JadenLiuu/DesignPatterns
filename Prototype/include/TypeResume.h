#ifndef TYPERESUME_H
#define TYPERESUME_H

#include "Resume.h"
using namespace std;

class ResumeInBlack : public Resume{
public:
    Resume* clone(string company) const override;
    ResumeInBlack(string comp) : Resume(comp) {
        color = "black";
    }
};

class ResumeInWhite : public Resume{
public:
    Resume* clone(string company) const override;
    ResumeInWhite(string comp) : Resume(comp) {
        color = "white";
    }
};

#endif