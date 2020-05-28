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
#include <ctype.h>


using namespace std;

class _Race : public Subject
{
    vector<Horse> race;
    int rasst;
    int number_of_winner;
    int number_of_races;
    int number_of_files;

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
        int get_Races();
};
#endif // RACE_H
