#include <iostream>
#include "libreria.h"
using namespace std;
int main() {
    int d=0;
    cout<<"inserire il numero dei numeri";
    cin>>d;
    float arr[d];
    riempi(arr,d);
    cout<<massimo(arr,d);
    return 0;
}
