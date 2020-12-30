#include "TypeResume.h"

Resume* ResumeInWhite::clone(string company) const{
    Resume* n = new ResumeInWhite(*this);
    n->setter(company);
    return n;
}

Resume* ResumeInBlack::clone(string company) const{
    Resume* n = new ResumeInBlack(*this);
    n->setter(company);
    return n;
}