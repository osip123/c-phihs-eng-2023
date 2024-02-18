#include<stdio.h>
#include <stdbool.h>

float calcVector2(float x, float y, float speed, bool repos, bool gorRepos){
    double result;
    // int* ptr = &result;

    if (!repos)
    {
        return 0;
    }

    else if (repos)
    {
        if (speed > 0)
        {
            x = x + speed;
            result = x;
        }

        else
        {
            x = x - speed;
            result = x;
        }
        
        if (speed == 0)
        {
            if (!gorRepos)
            {
                return x, y;
            }

            if (gorRepos)
            {
                if (speed > 0)
                {
                    y = y + speed;
                    result = y;
                }

                else
                {
                    y = y - speed;
                    result = y;
                }               
            }                   
        }       
    }    
    // printf("%i\n", x);
    // printf("%i\n", y);
    // printf("%i\n", result);
    return x, y, result;
}