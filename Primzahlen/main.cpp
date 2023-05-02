#include <cstdlib>
#include <ctime>
#include <math.h>
#include <iostream>
#include <limits>

using namespace std;

double tstart;
unsigned long long a[1000];
unsigned long long Zahl;
using namespace std;
int x = std::numeric_limits<int>::max();
int q = 1;
int z = 0;
int b = 0;
int zahl = 1000;

int main()
{

tstart = clock();
cout <<("Timer gestartet. ")<<endl;
for (int i=0; i<=x; i++){
        z = 0;
    for (unsigned long long q=1;q<=i;q++){
        if(i%q == 0){
            //cout << q << endl;
            //cout << a[i] << endl;
            z++;
        }

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
