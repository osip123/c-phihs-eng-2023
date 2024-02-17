#include<stdio.h>

float calaFAct(float N[]){
    double result;
    for (int i = 0; i < sizeof(N); i++)
    {
        result = result * N[i];
    }
    return result;
}