#include <stdio.h>

//Gives exp power of  n. 
//exp cannot be less tham 0
long long int power(int n, int exp){
	int i;
	if(exp==0)
		return 1;
	if(exp>0){
		long long int pow = 1;
		for(i=0;i<exp;i++)
			pow *= n;
		return pow;
	}
	else
		printf("Error, the exponent cannot be negative\n");
}
