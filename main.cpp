#include <iostream>
#include "Race.h"


using namespace std;

int main()
{
    ifstream fin("in_horse.txt");
    _Race a;
    int menu_choise = 0;
    cout << "Register yourself" << endl;
    Observer *b = new Client;
    a.add_client(b);
    return 0;

}
