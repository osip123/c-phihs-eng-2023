#include<stdio.h>
#include<stdbool.h>

float calcVector3(float x, float y, float z, float speed, float vertSpeed,
    bool repos, bool gorRepos, bool vertRespos
){
    if (!checkLine(repos))
    {
        x = calcMain(y, speed);
    }
    if (!chectVert(vertRespos))
    {
        z = calclVert(z, vertSpeed);
    }
    else{
        y = calcGor(x, speed);
    }

    printf("%i", x);
    printf("%i", y);
    printf("%i", x);

    return x, y, z;
}

float calclVert(float z, float speed){
    double res;
    if (speed > 0)
    {
        res = z + speed;
    }
    return res;
}

float calcGor(float x, float speed){
    double res; 
    if (speed > 0)
    {
        res = x + speed;
    }
    res = x - speed;
    return res;
}

float calcMain(float y, float speed){
    double res;
    if (speed > 0)
    {
        res = y + speed;
    }
    res = y - speed;
    return res;
}

bool checkGor(gorRepos){
    if (gorRepos)
    {
        return true;
    }
    return false;
}

bool chectVert(bool vertRespos){
    if (vertRespos)
    {
        return true;
    }
    return false;  
}

bool checkLine(repos){
    if (repos)
    {
        return true;
    }
    return false;
}