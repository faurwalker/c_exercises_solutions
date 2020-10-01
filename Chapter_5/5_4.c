// The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n.
// For example, 5 factorial is calculated as
// 5! = 5 x 4 x 3 x 2 x 1 = 120
#include <stdio.h>

int main(){
	int num;
	int fact = 1;
	printf("Please enter the number \n");
	scanf("%d", &num);
	printf("!%d = ",num);
	for(int i = num; i > 1; i--){
		fact = i * fact;
		printf("%d x ", i);
	}
	printf("1 = %d \n", fact);

	return 0;
}
