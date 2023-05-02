#include <iostream>    //
#include <stdlib.h>    //
#include <windows.h>   //
#include <cstdlib>     // => IMPORTIERT DEPENDENCIES
#include <ctime>       //
#include <math.h>      //

using namespace std;
int T;                 // => DEKLARIERT VARIABELN
int A[100];            // => ARRAY MIT HUNDERT STELLEN
int ok=1;              // 1 wird ausgeführt 0 wird nicht ausgeführt
int main()
{
    srand(time(NULL));
    for (int i=0;i<100;i++){  // => SOLANGE I (ANFANGSWERT 0) KLEINER ALS 100 IST WIRD DER LOOP AUSGEFÜHRT
        A[i]= rand()%1000+1;  // => MODULO = DIVISION MIT REST
        cout << A[i]<<endl;
    }
    while(ok){                // => SOLANGE ok DEN WERT 1 HAT LÄUFT DIESER LOOP
        ok=0;
        for(int i=0;i<99;i++){  // => SOLANGE I (ANFANGSWERT 0) KLEINER ALS 99 IST WIRDE DER LOOP AUSGEFÜHRT
            if (A[i]>A[i+1]){   // WENN DIE ZAHL AN DER STELL I (Z.B. 12) IM ARRAY KLEINER ALS DIE STELLE DANACH (13) IST
                T=A[i];         // WENN JA, DANN WIRD DER WERT AN DER I.TEN STELLE AN T ÜBERGEBEN UND A ÜBERNIMMT AN DER STELLE I
                A[i]=A[i+1];    // DEN WERT VON A AN DER STELLE I+1. DANACH WIRD DER WERT VON T AN A AN DER STELLE I+1 ÜBERGEBEN.
                A[i+1]=T;       // DIE WERTE WURDEN VERTAUSCHT
                ok=1;           
            }
        }
    }
       for (int i=0;i<100;i++){
         cout << "sortiert: "<< A[i]<<endl;
    }
    return 0;
}
