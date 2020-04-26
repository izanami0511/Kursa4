#ifndef OBSERVER_HPP_INCLUDED
#define OBSERVER_HPP_INCLUDED
using namespace std;
Class Observer {
     string person_name;
public:
    virtual void update() = 0;
    string getname(){
        return person_name;
    }
};


#endif // OBSERVER_HPP_INCLUDED
