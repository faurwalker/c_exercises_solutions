#include <stdio.h>


int main(){
	float a,b;
	printf("Please enter two numbers ( devide it with space ) \n");
	scanf("%f %f", &a, &b);
	
	if(b == 0){
		printf("You can't devide by zero!\n");
	} else{
		printf("%g  /  %g  =  %.3f \n",a,b,a / b); 
	} 

	return 0;
}
