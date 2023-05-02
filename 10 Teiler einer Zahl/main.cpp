#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <math.h>
double tstart;
unsigned long long a[1000]; //=> MIN. 64 BITS
int i=0;
unsigned long long Zahl;
using namespace std;

int main()
{
cout << "Bitte Zahl eingeben zur Teilerbestimmung: ";
cin >> Zahl; //=> INPUT == cin = cONSOLE inPut

tstart = clock(); //=> SIEHE 00TIMER; 08 LAUFZEIT
cout <<("Timer gestartet. ")<<endl;
for (long q=1;q<=sqrt(Zahl);q++){ // SOLAGE I (ANFANGSWERT 1) KLEINER ALS DIE WURZEL DES INPUTS IST WIRD HOCHGEZÄHLT
      if (Zahl%q==0){ // WENN DAS ERGEBNIS DER DIVISION VOM INPUT DURCH Q NULL IST WIRD I ERHÖHT
            i++;
        //cout << q << endl;
        a[i]=q; //=> TEILER WIRD IN EINEM ARRAY GESPEICHERT
        cout << a[i] << endl; //=> ARRAY WIRD GERPINTET, AUSGEGEBEN

        }
    }
if (a[i]==Zahl/a[i]){   //=> NICHT WICHTIG
        i=i-1;
// cout <<("Quadratzahl")<<endl << endl;
}
for (int q=i;q>0;q--){
    cout << Zahl/a[q]<< endl;
    }
    cout << endl;

cout << " Dauer:" << (clock()-tstart)/CLOCKS_PER_SEC <<endl; //=> WIE LANG HAT DER PC GEBRAUCHT
return 0;
}
