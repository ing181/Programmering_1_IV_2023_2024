#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");

    // datatyp namn;
    // namngivning
    // INTE: börja med en siffra
    // inget mellanrum mitt tal
    // Brukar man göra i stället
    // myAge, my_age
    // Undvik svenska tecken
    // Tilldelningsoperatorn EJ "lika med"
    // Lika med skrivs ==
     int tal;
     cout << "mata in ett heltal: ";
     cin >> tal;
     cout << (tal == 3) << endl;
// mindre än <, mindre än eller lika med <=, lika med ==,
// större än >, större än eller lika med >=
     if (tal == 3) {
            cout << "tal är lika med 3" << endl;
              if (tal < 4) {
                cout << "också mindre än fyra" << endl;
            }


     } else{
            cout << "tal är INTE lika med tre" << endl;
            if (tal < 4) {
                cout << "också mindre än fyra" << endl;
            }

     }


    return 0;
}
