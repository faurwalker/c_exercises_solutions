#include <stdio.h>

int main(){
	int a,b;
	printf("Please enter two numbers ( devide it by space ) \n");
	scanf("%d %d", &a, &b);
	printf("%s", (a % b == 0)? "Numbers are evenly devisible! \n" : "Numbers have a reminder \n");
	return 0;
}
