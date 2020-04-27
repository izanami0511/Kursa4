#include "Client.h"

Client::Client()
{
    //ctor
}

Client::~Client()
{
    //dtor
}

void Client::update(string op){
        cout << "Client: " << op << "has won the bet!";
}
