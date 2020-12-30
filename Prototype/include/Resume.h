#ifndef RESUME_H
#define RESUME_H
#include <string>
#include <iostream>
using namespace std;

enum Gender{
    FEMALE = 0,
    MALE
};

struct BasicIntro{
    string name;
    int age;
    Gender gender;
};

class Resume{
protected:
    string color;
    string company_;
    const BasicIntro basics_ = {
        .name = "Jaden",
        .age = 27,
        .gender = FEMALE
    };
public:
    Resume(string company): company_(company) {
        color = "";
    };
    virtual Resume* clone(string company) const = 0;
    virtual ~Resume() {};
    void show();
    void setter(string& company);
};

#endif