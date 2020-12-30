#include <Resume.h>

void Resume::show(){
    cout << "====== " << color << " =====\n";
    cout << "Dear " << company_ << ", \n";
    cout << "Here is my info: ";
    cout << "Name: " << basics_.name << ".\t";
    cout << "Gender: " << basics_.gender << ".\t";
    cout << "Age: " << basics_.age << "." << endl;
}

void Resume::setter(string& company){
    company_ = company;
}