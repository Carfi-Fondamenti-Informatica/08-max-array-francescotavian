#include <iostream>
#include "libreria.h"
using namespace std;
int main() {
    int d=0;
    cin>>d;
    float arr[d];
    riempi(arr,d);
    cout<<massimo(arr,d);
    return 0;
}
