#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int d=0;
    cin>>d;
    float arr[d];
    for (int i=0;i<d;i++){
        cin>>arr[i];
    }
    a = massimo(arr,d);
    cout<< a;
    return 0;
}
