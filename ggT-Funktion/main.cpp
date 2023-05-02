#include <iostream>
using namespace std;
int Zahl1, Zahl2;
int ggt(int a,int b){
a=a%b;
     if(a==0){
        return b;
    } else {
    ggt (b,a);
    }
}
int main()
{
    cin>> Zahl1>> Zahl2;
    cout << ggt(Zahl1,Zahl2) << endl;
    return 0;
}
