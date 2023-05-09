#include <iostream>    //
#include <stdlib.h>    //
#include <windows.h>   //
#include <cstdlib>     // => IMPORTIERT DEPENDENCIES
#include <ctime>       //
#include <math.h>      //

using namespace std;
int T;                 // => DEKLARIERT VARIABELN
            // => ARRAY MIT HUNDERT STELLEN
int ok=1;              // 1 wird ausgeführt 0 wird nicht ausgeführt

int A[7] = {0,0,0,0,0,0};

int eingabe;
int eingabe2;
int main()
{
    cout << "Bitte gebe an wie oft gewuerfelt werden soll:\n" << endl;
    cin >> eingabe;
    cout << "Bitte gebe an wieviele Seiten der Wuerfel haben soll:\n" << endl;
    cin >> eingabe2;
    srand(time(NULL));
    for (int i=0;i<eingabe;i++){  // => SOLANGE I (ANFANGSWERT 0) KLEINER ALS 100 IST WIRD DER LOOP AUSGEFÜHRT
        A[rand()%eingabe2+1]++;
        /*cout << A << endl;*/

    }
    for(int q=1; q<=6; q++){
        cout << "Zahl:" << q <<  A[q] << endl;
    }

    return 0;
}


//
// Created by user on 09.05.2023.
//
