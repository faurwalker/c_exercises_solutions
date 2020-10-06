#include <stdio.h>


int main(){
	int first = 0, second = 1,third;

	for(int i = 0; i < 15; i++){
		third = first + second;
		printf("%d \n", third);
		first = second;
		second = third;

	}


	return 0;
}
