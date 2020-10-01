#include <stdio.h>

int main(){
	int input;
	int sum = 0;
	printf("Please enter a number: ");
	scanf("%d", &input);
	for(int i = 10; input != 0; i = i * 10){
		int remain = input % i;
		sum = sum + remain / (i/10);
		input = input - remain;
	}
	printf("The sum equals to %d \n", sum);
	return 0;
}
