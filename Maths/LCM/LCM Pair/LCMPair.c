#include <stdio.h>
#include "../../GCD/GCD Pair/GCDPair.c"

//Calculates the LCM of a and b.
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
