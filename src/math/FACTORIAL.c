#include<stdio.h>

float calaFAct(float N[]){
    double result;
    int* ptr = &result;
    for (int i = 0; i < sizeof(N); i++)
    {
        result = result * N[i];
    }
    return result; 
    free(ptr);
}