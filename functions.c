#include <stdio.h>

int sumIntArray(int intArray[], int arraySize){
    int sum = 0;
    for(int i = 0; i < arraySize; i++){
        sum = sum + intArray[i];
        }
    return sum;
}
