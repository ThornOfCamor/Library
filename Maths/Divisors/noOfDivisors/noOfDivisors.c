#include <stdio.h>
#include <math.h>
#include "../isSqrt/isSqrt.c"
#include "../../Prime/IsPrime.c"

//Gives the number of divisors of n, including 1 and n.
int noOfDivisors(long long int n){
	int count = 0;
	int i =1;
	if(isPrime(n)==1)
		return 2;
	else{
		for(i=1;i<sqrtN(n);i++){
			if(n%i==0)
				count++;
		}
		if(isSqrt(n)==1)
            return 2*count+1;
        else
            return 2*count;
	}
}
