#ifndef RACE_H
#define RACE_H
#include <vector>
#include <iostream>
#include "Horse.hpp"
#include <fstream>
#include <string>
#include <ctime>
#include "Subject.hpp"
#include "Client.h"

using namespace std;

class _Race : public Subject
{
    vector<Horse> race;
    int rasst = 1000;

    public:
        _Race();
        ~_Race();

        void add_client(Observer *op);
        void notify_client(Observer *op);
        void delete_client();

        void fill_vector(ifstream &file);
        void test_print();
        void main_Race(Observer *op);
        void file_print();
};
#endif // RACE_H
