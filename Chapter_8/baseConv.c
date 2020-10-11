// simple integer's base converter
#include <stdio.h>

long int NumberToConvert;
int base;

int main(){
	void getNumberAndBase(void);
	getNumberAndBase();
	printf("%li %d",NumberToConvert, base);

	return 0;
}


void getNumberAndBase(void){
	printf("Please print the base you want to convert to: \n");
	scanf("%d", &base);
	if(base < 2 || base > 16){ 
		printf("The base is automatically set to 10 \n");
		base = 10;
	}
	printf("Please enter a number you want to convert: \n");
	scanf("%li", &NumberToConvert);
		
}

void convertNumber(){}

void displayConvertedNumber(){}
