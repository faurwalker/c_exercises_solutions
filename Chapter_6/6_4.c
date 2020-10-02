#include <stdio.h>
#include <stdbool.h>

//  Commands description
//  S - Set accumulator to
//  E - end the programm
//  +, -, /, * - standard operations 
//

int main(){
	float accum, value;
	char sym;
	bool status = true;

	printf("Calculator was launched! \n");
	while(status){
		if(2 != scanf(" %f %c", &value, &sym)) continue; // bug fix with infinite loop | non numerical input causes endless loop | scanf wrong data type 
		switch(sym){
			case 'S':
				accum = value;
				break;
			case 'E':
				status = false;
				break;
			case '+':
				accum += value;
				break;
			case '-':
				accum -= value;
				break;
			case '*':
				accum *= value;
				break;
			case '/':
				accum /= value;
				break;
			default: 
				printf("Command is undefined ! Please try again ! \n");
				continue;
				break;				
		}
		printf(" = %f \n", accum);

	}
	
	return 0;
}
