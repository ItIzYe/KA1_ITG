#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <math.h>
double tstart;
unsigned long long a[1000];
int i=0;
unsigned long long Zahl;
using namespace std;

int main()
{
cout << "Bitte Zahl eingeben zur Teilerbestimmung: ";
cin >> Zahl;

tstart = clock();
cout <<("Timer gestartet. ")<<endl;
for (long q=1;q<=sqrt(Zahl);q++){
      if (Zahl%q==0){
            i++;
        //cout << q << endl;
        a[i]=q;
        cout << a[i] << endl;

        }
    }
if (a[i]==Zahl/a[i]){
        i=i-1;
// cout <<("Quadratzahl")<<endl << endl;
}
for (int q=i;q>0;q--){
    cout << Zahl/a[q]<< endl;
    }
    cout << endl;

cout << " Dauer:" << (clock()-tstart)/CLOCKS_PER_SEC <<endl;
return 0;
}
