#include <iostream>  // => IMPORTIERT PACKAGES
#include <windows.h> //

using namespace std;
int s=-1;
int main()
{
    for (int i=1000;i>0;i=i+s){ // => SOLANGE I (ANFANGSWERT 1000) GRÖßER ALS 0 IST WIRD EINE ZAHL ABGEZOGEN (SIEHE OBEN; S=-1)
   cout << i << endl;
   if (i<501){ // => SOBALD I DEN WERT 500 HAT WIRD DER WERT VON S AUF 1 GEÄNDERT DAMIT ES WIEDER HOCHZÄHLT
    s=1;
   }
   if (i>999){
    s=-1;
   }
Sleep(20); //=> PROGRAMM WARTET VOR DEM NÄCHSTEN OUTPUT
    }

    return 0; // => BEENDET PROGRAMM
}
