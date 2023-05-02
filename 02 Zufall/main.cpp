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
    while(ok){
        ok=0;
        for(int i=0;i<99;i++){
            if (A[i]>A[i+1]){
                T=A[i];
                A[i]=A[i+1];
                A[i+1]=T;
                ok=1;
            }
        }
    }
       for (int i=0;i<100;i++){
         cout << "sortiert: "<< A[i]<<endl;
    }
    return 0;
}
