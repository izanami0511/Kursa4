#include "Race.h"

_Race::_Race()
{
    rasst = 1000;
    number_of_winner = 0;
    number_of_races = 0;
    number_of_files = 1;
}

_Race::~_Race()
{
    race.clear();
}

void _Race::add_client(Observer *op){
    string h;
    cin >> h;
    op->setname(h);
    client_database.push_back(op);

}
void _Race::delete_client(){
    try{
        if(client_database.size() == 0)
            throw 666;
        client_database.pop_back();
        cout << "Last added client was deleted." << endl;
    }
    catch(int i){
        cout << "There is no one to delete!" << endl;
    }
}

void _Race::notify_client(Observer *op){
     try{
        if(client_database.size() == 0)
            throw 666;
    for (int i = 0; i < Subject::client_database.size(); i++){
        op->update(client_database[i]->getname());
        }
    }
    catch(int i){
        cout << "There is no one to delete!" << endl;
    }
}

void _Race::fill_vector(ifstream &file){
    Horse temp;
    srand ( time(NULL) );

    try{
        if(!(file.is_open()))
            throw 666;

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
        race[i].wins = 0;
        race[i].speed = rand() % 20 + 45;
        }
    }
    catch(int i){
        cout << "File isn't open or empty!" << endl;
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
void _Race::main_Race(Observer *op){
    vector<int> time;
    int winner = 0;
    int no_of_horse = 0;
    cout << "Choose your horse: " << endl;
    for (int i = 0; i < 5; i++){
        cout << i + 1 << " ";
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
    number_of_winner = no_of_horse;
    race[no_of_horse].wins += 1;
    if (choice == (no_of_horse + 1) ){
        this->notify_client(op);
    }
    else {
        cout << "Your horse didn't win." << endl;
    }
    number_of_races += 1;
    // переопредление скоростей
    for (int i = 0; i < 5; i++){
        race[i].speed = rand() % 20 + 45;
    }
}

void _Race::file_print(){
    if(number_of_races % 6 == 0){
        number_of_files += 1;
        ofstream fout(to_string(number_of_files), ios_base::app);
    }

    ofstream fout(to_string(number_of_files), ios_base::app);
    fout << "Race number: " << number_of_races + 1;
    fout << "The Horse that won: " << endl;
    fout << "Breed: " << race[number_of_winner].breed << endl;
    fout << "Nickname: "<< race[number_of_winner].nickname << endl;
    fout << "Year oof birth: "<< race[number_of_winner].year_birthday << endl;
    fout << "Number of wins: "<< race[number_of_winner].wins << endl;
    fout << "Speed of horse: "<< race[number_of_winner].speed << endl;
    fout << endl;
    number_of_winner = 0;

}



