#include "User.h"
#include <iostream>

User::User(std::string n, int accNum, double bal){
    name = n;
    accountNumber = accNum;
    balance = bal;
}

std::string User::getName(){return name;}
int User::getAccountNumber(){return accountNumber;}
double User::getBalance(){return balance;}

void User::showBalance(){
    std::cout << "Usuario: " << name << "\n";
    std::cout << "Numero de cuenta: " << accountNumber << "\n";
    std::cout << "Saldo actual: $" << balance << "\n";
}