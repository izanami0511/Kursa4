#ifndef CLIENT_H
#define CLIENT_H
#include "Observer.hpp"
#include "Subject.hpp"

class Client : public Observer
{

public:
    Client();
    ~Client();
    void update(string op);
};

#endif // CLIENT_H
