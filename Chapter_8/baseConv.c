// simple integer's base converter
#include <stdio.h>

long int NumberToConvert;
int base, NumberConverted[64], digit = 0;
const char baseDigits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};


int main(){
	void getNumberAndBase(void);
	void convertNumber(void);
	void displayConvertedNumber(void);

	getNumberAndBase();
	convertNumber();
	displayConvertedNumber();

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

void convertNumber(void){
	while(NumberToConvert != 0){
		int num = NumberToConvert % base;
		NumberConverted[digit] = baseDigits[num];
		digit++;
		NumberToConvert /= base; 
	}	
}


void displayConvertedNumber(void){
	printf("Converted number = ");
	for(int i = digit; i >= 0; i--){
		printf("%c", NumberConverted[i]);
	} 
	printf("\n");
}
