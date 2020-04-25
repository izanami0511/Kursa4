#include <iostream>
#include "Race.h"

using namespace std;

int main()
{
    ifstream fin("in_horse.txt");
    _Race teest;
    teest.fill_vector(fin);
    teest.test_print();
    teest.main_Race();
    return 0;

}
