#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");

    // datatyp namn;
    // namngivning
    // INTE: b�rja med en siffra
    // inget mellanrum mitt tal
    // Brukar man g�ra i st�llet
    // myAge, my_age
    // Undvik svenska tecken
    // Tilldelningsoperatorn EJ "lika med"
    // Lika med skrivs ==
     int tal;
     cout << "mata in ett heltal: ";
     cin >> tal;
     cout << (tal == 3) << endl;
// mindre �n <, mindre �n eller lika med <=, lika med ==,
// st�rre �n >, st�rre �n eller lika med >=
     if (tal == 3) {
            cout << "tal �r lika med 3" << endl;
              if (tal < 4) {
                cout << "ocks� mindre �n fyra" << endl;
            }


     } else{
            cout << "tal �r INTE lika med tre" << endl;
            if (tal < 4) {
                cout << "ocks� mindre �n fyra" << endl;
            }

     }


    return 0;
}
