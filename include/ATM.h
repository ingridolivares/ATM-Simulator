#ifndef ATM_h
#define ATM_h

#include "User.h"

class ATM {
    private:
        User usuario;
    public:
        ATM(User u);
        void showMenu();
};
#endif