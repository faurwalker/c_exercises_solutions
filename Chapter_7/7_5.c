#include <stdio.h>


int main(){	
	int numbers[10] = { 1 };
	int i,j;

	for(j = 0; j < 10; j++){
		for(i = 0; i < j; i++){
			numbers[j] += numbers[i];
		}
	
	}

	for(j=0; j < 10; j++){
		printf("%i \n", numbers[j]);
	}


	return 0;
}
