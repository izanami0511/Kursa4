#pragma once
#include <vector>
#include <iostream>
#include "Horse.h"
#include <fstream>
#include <ctime>

using namespace std;

class _Race
{
    vector<Horse> race;
    int rasst = 1000;

    public:
        _Race();
        ~_Race();
        void fill_vector(ifstream &file);
        void test_print();
        void main_Race();
        bool win();
};
