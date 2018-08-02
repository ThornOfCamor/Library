#include <stdio.h>
#include "../../GCD/GCD Pair/GCDPair.c"

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}