#ifndef USER_H
#define USER_H
#include <string>

class User{
    private:
        std::string name;
        int accountNumber;
        double balance;

    public:
        User(std::string n, int accNum, double bal);
        std::string getName();
        int getAccountNumber();
        double getBalance();

        void showBalance();
};

#endif
