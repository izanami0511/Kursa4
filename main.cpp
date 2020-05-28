#include <iostream>
#include "Race.h"


using namespace std;

int main()
{
    ifstream fin("in_horse.txt");
    _Race a;
    int menu_choise = 0;
    int number_of_race = 0;
    int temp;
    bool exit = true;
    cout << "Register yourself" << endl;
    Observer *b = new Client;
    a.add_client(b);
    do {
		system("clear");
		cout << "Choose:" << endl;
		cout << "[1] Load horses from file." << endl;
		cout << "[2] Print loaded horses from file." << endl;
		cout << "[3] Launch one race." << endl;
		cout << "[4] Launch main race." << endl;
		cout << "[5] Delete client." << endl;
		cout << "[6] Exit." << endl;
		cout << ">";
		cin >> menu_choise;
		switch(menu_choise){
            case 1:
                system("clear");
                cin.ignore(1000, '\n');
                a.fill_vector(fin);
                cout << "File was read!"<< endl;
                getchar();
                break;
            case 2:
                system("clear");
                cin.ignore(1000, '\n');
                a.test_print();
                getchar();
                break;
            case 3:
                system("clear");
                cin.ignore(1000, '\n');
                a.main_Race(b);
                a.file_print();
                cout << "Check output files!" << endl;
                number_of_race +=1;
                getchar();
                break;
            case 4:
                system("clear");
                cin.ignore(1000, '\n');
                for(int i = 0; i < 5; i++){
                    a.main_Race(b);
                    a.file_print();
                }
                cout << "Check output files!" << endl;
                number_of_race +=5;
                getchar();
                getchar();
                break;
            case 5:
                system("clear");
                cin.ignore(1000, '\n');
                a.delete_client();
                getchar();
                break;
            case 6:
                exit = false;
                }
		} while(exit);

    return 0;

}
