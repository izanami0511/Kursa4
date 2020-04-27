#ifndef OBSERVER_HPP_INCLUDED
#define OBSERVER_HPP_INCLUDED
using namespace std;

class Observer {
public:
    virtual void update(int op) = 0;
};


#endif // OBSERVER_HPP_INCLUDED
