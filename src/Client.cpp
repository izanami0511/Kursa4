#include "Client.h"

Client::Client()
{
    //ctor
}

Client::~Client()
{
    //dtor
}

void Client::update(int op){
        cout << "Client: " << this->Subject::getClientName(op) << "has won the bet!";
}
