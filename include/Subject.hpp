#ifndef SUBJECT_HPP_INCLUDED
#define SUBJECT_HPP_INCLUDED
#include <vector>
using namespace std;

class Subject{
    protected:
        vector<string> client_database;
    public:
        virtual void add_client() = 0;
        virtual void notify_client() = 0;
        virtual void delete_client() = 0;

};


#endif // SUBJECT_HPP_INCLUDED
