#ifndef FACTORY_H
#define FACTORY_H

#include "Resume.h"
#include "TypeResume.h"
#include <unordered_map>

class Factory{
public:
    enum types
    {
        BLACK = 0,
        WHITE
    };
    Resume* construct(string comp, types t) const{
        return facResumes.at(t)->clone(comp);
    };
    ~Factory(){
        for(auto pair : facResumes){
            cout << "deleting Resume prototype: " << pair.first << endl;
            delete pair.second;
        }
    }
private:
    const unordered_map<types, Resume*> facResumes = {
        {WHITE, new ResumeInWhite("")},
        {BLACK, new ResumeInBlack("")}
    };
};

#endif