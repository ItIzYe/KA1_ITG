#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
double tstart;;
int main()
{

    while (1){
    tstart = clock();
    cout << " Start:"<< tstart ;
        for (double q=0;q<90000000;q++);
    tstart = (clock()-tstart)/CLOCKS_PER_SEC;
    cout << " Dauer:" << tstart <<endl;

    }
    return 0;
}

