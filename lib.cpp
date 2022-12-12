
#include "libreria.h"
#include <iostream>
using namespace std;
void riempi(float arr[], int d)
{
    for (int i=0;i<d;i++){
        cin>>arr[i];
    }

}
float massimo(float arr[], int d) {
    float max=0;
    for (int i=0;i<d; i++){
        if (i==0){
            max=arr[i];

        }
        else if (arr[i]>max){
            max =arr[i];
        }
    }
    return max;
}
