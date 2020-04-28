#ifndef SUBJECT_HPP_INCLUDED
#define SUBJECT_HPP_INCLUDED
#include <vector>
#include <iostream>
#include <Observer.hpp>
#include <Client.h>


using namespace std;

class Subject{
    protected:
        vector<Observer*> client_database;
    public:
        virtual void add_client(Observer *op) = 0;
        virtual void notify_client(Observer *op) = 0;
        virtual void delete_client() = 0;
};

#endif // SUBJECT_HPP_INCLUDED
