#include <iostream>
#include <cmath>
using namespace std;

int getWays(int a, int b, int i){
    if(a == 0)
        return 1;
    if(a < 0 || pow(i, b) > a)
        return 0;
    return getWays(a - pow(i, b), b, i + 1) + getWays(a, b, i + 1);
}

int getAllWays(int a, int b) {
    return getWays(a, b, 1);
}


