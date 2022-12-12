#include <iostream>
#include "libreria.h"
using namespace std;
int main() {
    int d=0;
    cin>>d;
    float arr[d];
    for (int i=0;i<d;i++){
        cin>>arr[i];
    }
    cout<<massimo(arr,d);
    return 0;
}
