#include "Race.h"

_Race::_Race()
{
    rasst = 1000;
}

_Race::~_Race()
{
    race.clear();
}

void _Race::add_client(Observer *op){
    client_database.push_back(op);

}
void _Race::delete_client(){
    client_database.pop_back();
}

void _Race::notify_client(){
    for (int i = 0; i < Subject::client_database.size(); i++){
        Client::update(client_database[i]);
    }
}

void _Race::fill_vector(ifstream &file){
    Horse temp;
    srand ( time(NULL) );

    for (int i = 0; i < 5; i++){
        race.push_back(temp);
        string h;
        getline(file,h);
        race[i].breed = h;
        getline(file,h);
        race[i].nickname = h;
        getline(file,h);
        race[i].year_birthday = h;
        getline(file,h);
        race[i].wins = 10;
        race[i].speed = rand() % 20 + 45;
    }
}
void _Race::test_print(){
    for (int i = 0; i < 5; i++){
        cout << race[i].breed << endl;
        cout << race[i].nickname << endl;
        cout << race[i].year_birthday << endl;
        cout << race[i].wins << endl;
        cout << race[i].speed << endl;
    }
}
void _Race::main_Race(){
    vector<int> time;
    int winner = 0;
    int no_of_horse = 0;
    cout << "Choose your horse: " << endl;
    for (int i = 0; i < 5; i++){
        cout << i + 1;
        cout << race[i].nickname << endl;
    }
    int choice;

    cout << "Insert number of Horse: ";
    cin >> choice;

    for (int i = 0; i < 5; i++){
        time.push_back(rasst/race[i].speed);
    }

    winner = time[0];
    for (int i = 0; i < 5; i++){
        if(time[i] < winner){
            winner = time[i];
            no_of_horse = i;
        }
    }
    cout << no_of_horse + 1 << endl;

    if (choice == (no_of_horse + 1) ){
        //notify()
    }

}


//bool _Race::win(){
    //
//}
