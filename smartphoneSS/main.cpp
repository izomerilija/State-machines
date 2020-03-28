#include <iostream>
#include "OpSystem.hpp"
#include "Smartphone.hpp"

using namespace std;
#define KRAJ_PROGRAMA 11

void printOpSystem(){

}

void printSmartphone(){
   
}

int meni(){

    cout << endl;
    cout << "  -----------------------------------------" << endl;
    cout << "  Izaberite  operaciju:                    " <<endl << endl;
    cout << "  1. Operativni sistem - Android" << endl;
    cout << "  2. Operativni sistem - iOS" << endl;
    cout << "  3. Operativni sistem - verzija" << endl;
    cout << "  4. Telefon - Ukljuci" << endl;
    cout << "  5. Telefon - Iskljuci" << endl;
    cout << "  6. Telefon - Uspavaj" << endl;
    cout << "  7. Telefon - Probudi" << endl;
    cout << "  8. Telefon - Pokreni Azuriranje" << endl;
    cout << "  9. Telefon - Podigni verziju operativnog sistema" << endl;
    cout << "  10. Telefon - Zavrsi azuriranje" << endl;
    cout << "  11. Zavrsi program." << endl;
    cout << "  > ";
    int n;
    cin >> n;
    cout << endl << endl;
    return n;
}

int main(){

   OpSystem = op;
   Smartphone = sp;
   
   int n;
   do {
   
        n = meni();
        switch (n)
        {
            case 11: cout << "KRAJ PROGRAMA"; break;
            default: cout << "Nepostojeca operacija." << endl;
        }
        printOpsystem(op);
        printSmartphone(sp);

    } while (n != KRAJ_PROGRAMA);
    
    return 0;
 }
