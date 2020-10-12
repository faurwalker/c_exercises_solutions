#include <stdio.h>


int main(){
	long int x_to_the_n(int num, int pow);
	int num, pow;
	printf("Please enter the number you want raise to a power \n");
	scanf("%d", &num);
	printf("Please enter the power you want to raise int to \n");
	scanf("%d", &pow);

	printf("%li \n", x_to_the_n(num,pow));
}


long int x_to_the_n(int num, int pow){
	if(pow < 0){
		printf("Please enter a positive integer number! \n");
		return -1;
	}
	long int result = 1;
	for(int i = 0; i < pow; i++){
		result *= num;
	}	
	return result;
}
