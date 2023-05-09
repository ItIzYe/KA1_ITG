#include <iostream>                            //
#include <stdlib.h>                            //
#include <windows.h>                           //
#include <cstdlib>                             // => IMPORTIERT NÖTIGE PACKAGES DIE FÜR DAS KORREKTE LAUFEN DES PROGRAMMS BENÖTIGT WERDEN
#include <ctime>                               //
#include <math.h>                              //
using namespace std;
double tstart;                                 // => ERSTELLT FLOAT
int main()
{
    while (1){                                 // => 1 ENTSPRICHT True, KANN DURCH return 0; ODER break; GEBROCHEN WERDEN (EINFACH return 0; BENUTZEN BITTE)
    tstart = clock();                          // => CLOCK AUS DEM <ctime> PACKAGE
    cout << " Start:"<< tstart ;               // => cout == cONSOLE out, EINGABE IST cin == cONSOLE inPUT 
    for (double q=0;q<90000000;q++){
    tstart = (clock()-tstart)/CLOCKS_PER_SEC;  // CLOCKS_PER_SEC AUS <ctime> PACKAGE, MUSS MAN NICHT VIEL ERKLÄREN
    cout << " Dauer:" << tstart <<endl;
    }
    }
    return 0;                                  // => OBEN GENANNTER BREAK VON DER SCHLEIFE
}
