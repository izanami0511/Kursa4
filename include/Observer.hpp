#ifndef OBSERVER_HPP_INCLUDED
#define OBSERVER_HPP_INCLUDED
#include <string>
using namespace std;

class Observer {
protected:
     string person_name;
public:
    virtual void update(string op) = 0;
    string getname(){
        return person_name;
    }
    void setname(string op){
        person_name = op;
    }
};


#endif // OBSERVER_HPP_INCLUDED
