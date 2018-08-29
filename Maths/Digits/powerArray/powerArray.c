#include <stdio.h>
#include <stdlib.h>

//Returns array of the size given as input
long long int* powerArray(int a, int b, int size){
	int i, j;
	long long int *arr;
	arr = (long long int*)malloc(size*sizeof(long long int));
	for(i=1;i<size;i++)
		arr[i] = 0;
	if(b==0){
		arr[0] = 1;
		return arr;
	}
	arr[0] = a;
	for(i=1;i<size;i++){
		arr[i] = arr[i-1]/10;
		arr[i-1] = arr[i-1]%10;
	}
	if(b==1)
		return arr;
	for(i=1;i<b;i++){
		arr[0] *= a;
		for(j=1;j<size;j++){
			arr[j] = arr[j]*a + arr[j-1]/10;
			arr[j-1] = arr[j-1]%10;
		}
	}
	return arr;
}
