#include <iostream>

using namespace std;

int i=1; // globale Variable

int main()
{
    cout << "Start: " << i << endl;
    for (int i=5;i>3;i--){
    cout << "erste for-Schleife: " << i << endl;
    }
     cout << "zwischen erster und zweiter Schleife: " << i << endl;
    for (int i=5;i>3;--i){
    cout << "zweite for-Schleife: " << i << endl;
    }
     cout << "zwischen zweiter und dritter Schleife: " << i << endl;
     for (i=5;i>3;i--){
    cout << "dritte for-Schleife: " << i << endl;
    }
       cout << "zwischen dritter und vierter Schleife: " << i << endl;
    for (i=5;i>3;i--){
    cout << "vierte for-Schleife: " << i << endl;
    ++i;
    }
     cout << "Schluss: " << i << endl;
    return 0;
}
