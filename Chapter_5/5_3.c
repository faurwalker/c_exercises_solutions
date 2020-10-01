#include <stdio.h>

int main(){
	printf("n \t n*(n+1)/2 \n");
	printf("----------------\n");
	for(int i = 5; i <= 50; i = i + 5){
		printf("%d \t %d \n", i, i*(i+1)/2);
	} 

	return 0;
}


