#include <stdio.h>


int main(){
	int num;
	printf("Please enther the number:  ");
	scanf("%d", &num);
	if(num == 0){
		printf(" zero \n");
		return 0;
	}
	for(int i = 10; num % (i / 10) != num; i = i * 10){
		int sing = num % i / (i / 10);
		num = num - ( num % i);
		switch(sing){
			case 1:
				printf(" one");
				break;
			case 2:
				printf(" two");
				break;
			case 3: 
				printf(" three");
				break;
			case 4: 
				printf(" four");
				break;
			case 5:
				printf(" five");
				break;
			case 6:
				printf(" six");
				break;
			case 7:
				printf(" seven");
				break;
			case 8: 
				printf(" eight");
				break;
			case 9:
				printf(" nine");
				break;
			default:
				printf(" Invalid input");
		}
	}
	printf("\n");

	return 0;
}
