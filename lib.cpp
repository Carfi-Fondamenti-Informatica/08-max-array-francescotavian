
#include "libreria.h"
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
