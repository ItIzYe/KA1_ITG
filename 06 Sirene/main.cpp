#include <iostream>
#include <windows.h>

using namespace std;
int s=-1;
int main()
{
    for (int i=1000;i>0;i=i+s){
   cout << i << endl;
   if (i<501){
    s=1;
   }
   if (i>999){
    s=-1;
   }
Sleep(20);
    }

    return 0;
}
