#include <stdio.h>
#include "../sqrt/sqrt.c"

//Gives 1 if n is a perfect square.
int isSqrt(long long int n){
    int i = sqrtN(n);
    if(n==i*i)
        return 1;
    else
        return 0;
}
