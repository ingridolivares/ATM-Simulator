#include "User.h"
#include "ATM.h"

int main(){
    User u("Ingrid", 12345, 1000.0);
    ATM atm(u);

    atm.showMenu();

    return 0;
}