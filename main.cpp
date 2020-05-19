#include <iostream>
#include "Race.h"


using namespace std;

int main()
{
    ifstream fin("in_horse.txt");
    _Race a;
    //Observer *b;
    Observer *b = new Client;
    a.fill_vector(fin);
    a.add_client(b);
    a.main_Race(b);
    a.file_print();
    return 0;

}
