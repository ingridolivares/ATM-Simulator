#include "ATM.h"
#include <iostream>

ATM::ATM(User u) : usuario(u){}

void ATM::showMenu() {
    int option;

    do{
        std::cout << "\n --- CAJERO AUTOMATICO --- \n";
        std::cout << "1. Colsultar saldo \n";
        std::cout << "2. Salir \n";
        std::cout << "Selecciona una opcion: ";
        std::cin >> option;

        switch(option) {
            case 1:
                usuario.showBalance();
                break;
            
            case 2:
                std::cout << "Gracias por usar el cajero\n";
                break;

            default:
                std::cout << "\n- OPCION INVALIDA -\n";
        }
    }while(option != 2);
}