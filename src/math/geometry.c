#include<stdio.h>

float calcSin(float A, float B){
    double result;
    // int *result = malloc(5 * sizeof(int));
    result = A / B;
    printf("%f", result);
    return result;
}

float calcCos(float A, float B){
    double result = B / A;
    printf("%f", result);
    return result;
}

float calcTg(float SIN, float COS){
    double result;
    result = SIN / COS;
    return result;
}

float calcCtg(float COS, float SIN){
    double result;
    result = COS / SIN ;
    return result;
}