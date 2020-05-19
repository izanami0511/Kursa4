#include "Client.h"

Client::Client()
{
    cout << "Hello!" << endl
    << "Enter your name: ";
}

Client::~Client()
{
    //dtor
}

void Client::update(string op){
        cout << "Client: " << op << " has won the bet!";
}
