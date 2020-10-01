#include <stdio.h>


int main(){
	printf(" n \t n^2\n");
	printf("----------\n");
	for(int i = 1; i <= 10; i++){
		printf(" %-2d \t %d \n",i,(i*i));
	}

	return 0;
}
