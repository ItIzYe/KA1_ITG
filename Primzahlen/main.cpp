#include <cstdlib>
#include <ctime>
#include <math.h>
#include <iostream>
#include <limits>

using namespace std;

double tstart;
int x = std::numeric_limits<int>::max(); //=> ENTSPRICHT UNENDLICH; IHR KÖNNT STATTDESSEN AUCH EINEN INPUT VERWENDEM
int q = 1;
int z = 0;
int b = 0;
int zahl = 1000;

int main()
{

tstart = clock();
cout <<("Timer gestartet. ")<<endl;
for (int i=0; i<=x; i++){ //=> LÄUFT UNENDLICH, MAN HÄTTE BESTIMMT AUCH EINE WHILE SCHLEIFE NEHMEN KÖNNEN
        z = 0;
    for (unsigned long long q=1;q<=i;q++){
        if(i%q == 0){
            //cout << q << endl;
            //cout << a[i] << endl;
            z++;
        }
                        // => HIER WIRD HOCH GERECHNET UND JEDE ZAHL DURCH Q GETEILT, SOOFT ES GEHT.\n DIE ANZAHL DER ZAHLEN DURCH DIE GETEILT WERDEN KANN WIRD MIT Z GECOUNTED. WENN Z NUR 2 ENTSPTRICHT WIRD b UM 1 ERHÖHT. SOLANGE b KLEINER IST ALS 1000 (SIEHE zahl) ODER DIESER ZAHL ENSTPRICHT WIRD DIE ZAHL AUSGEGEBEN:
        }
        if(z == 2){
            b++;
            if(b<= zahl){
            cout << i << endl;
            }


           // cout << "1000 Primzahlen wurden abgezählt" << endl;

    }

}



cout << " Dauer:" << (clock()-tstart)/CLOCKS_PER_SEC <<endl;
return 0;
}
