#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;
int T;
int A[100];
int ok=1; // 1 wird ausgeführt 0 wird nicht ausgeführt
int main()
{
    srand(time(NULL));
    for (int i=0;i<100;i++){
        A[i]= rand()%1000+1;
        cout << A[i]<<endl;
    }
    for (int ii=0;ii<98;ii++){
            for (int i=ii;i<100;i++){
                if (A[ii]>A[i]){
                    T=A[ii];
                    A[ii]=A[i];
                    A[i]=T;
                    }
            }
    }
       for (int i=0;i<100;i++){
         cout << "sortiert: "<< A[i]<<endl;
        }
    return 0;
}
