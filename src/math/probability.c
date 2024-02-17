#include<stdio.h>
#include "./FACTORIAL.c"

float pRrobability(char rep, int a[], int b[]){
    float result;
    float resResult;

    if (rep == 'y')
    {
        resResult = calaFAct(a);
        for (size_t i = 0; i < sizeof(b); i++)
        {
            result = resResult / ( calaFAct(b) * sizeof(b) );
            
        }
        
    }
    else{
        result = calaFAct(a);
    }
    return result;
}

float pAccommodation(){
    
}