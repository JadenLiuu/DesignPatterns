#ifndef TYPERESUME_H
#define TYPERESUME_H

#include "Resume.h"
using namespace std;

class ResumeInBlack : public Resume{
    Resume* clone(string company) const override;
public:
    ResumeInBlack(string comp) : Resume(comp) {
        color = "black";
    }
};

class ResumeInWhite : public Resume{
    Resume* clone(string company) const override;
public:
    ResumeInWhite(string comp) : Resume(comp) {
        color = "white";
    }
};

#endif