#include <iostream>
#include "OpSystem.hpp"
#include "Smartphone.hpp"

using namespace std;
#define KRAJ_PROGRAMA 11

void printOpSystem(OpSystem os){
    cout << "  --/ Operativni sistem /--" << endl;
    cout << "  Platforma: " << os.getType() << endl;
    cout << "  Verzija: "<< os.getVersion() << endl;
}

void printSmartphone(Smartphone sp){
    cout << "  --/ Telefon /--" << endl;
    cout << "  Operativni sistem: " << sp.system.getType() << endl;
    cout << "  Verzija operativnog sistema: "<< sp.getVersion() << endl;
    cout << "  Stanje: ";
    switch (sp.getPhoneState()){
        case sON:
            cout << "UKLJUCEN";
            break;
        case sOFF:
            cout << "ISKLJUCEN";
            break;
        case sSTANDBY:
            cout << "STANDBY";
            break;
        case sUPDATE:
            cout << "AZURIRA SE";
            break;
        default:
            cout << "Nepostojece stanje";
    }
    cout << endl;
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

   OpSystem = os;
   Smartphone = sp;
   
   int n;
  switch (n)
        {
            /*
            case 1:
                os.set(Android);
                break;
            case 2:
                 os.set(iOS);
                 break;
            */
            case 3:
                 cout <<  os.getVersion();<< endl;
                 break;
            case 4:
                sp.turnOn();
                break;
            case 5:
                sp.turnOff();
                break;
            case 6:
                sp.sleep();
                break;
            case 7:
                sp.wakeUP();
                break;
            case 8:
                int newVersion;
                cout <<  "  Koju novu verziju OS zelite?" << endl << endl;
                cout <<  "  > " << endl;
                cin >> newVersion;
                sp.startUpdate(newVersion);
                break;
            case 9:
                sp.downloadBatch();
                break;
            case 10:
                sp.finishUpdate();
                break;
            case 11:
                cout << "  KRAJ PROGRAMA";
                break;

            default: cout << "  Nepostojeca operacija." << endl;
        }
        printOpsystem(os);
        printSmartphone(sp);

    } while (n != KRAJ_PROGRAMA);
    
    return 0;
 }
