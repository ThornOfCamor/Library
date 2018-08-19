#include <stdio.h>
#include <stdlib.h>

int* toBinary(int n, int* size){
	int i, count = 1, temp = n;
	while(temp/2>0){
		temp /= 2;
		count++;
	}
	int* bin;
	*size = count;
	bin = (int*)malloc(count*sizeof(int));
	if(n==1){
		bin[0] = 1;
		return bin;
	}
	if(n==0){
		bin[0] = 0;
		return bin;
	}
	for(i=0;i<count;i++){
		bin[i] = n%2;
		n /= 2;
	}
	return bin;
}
