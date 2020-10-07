// Newthon - Raphoson to compute the square root of a number
#include <stdio.h>

const float EPSILON = 0.00001; 

float abs24(float num){
	if(num >= 0) return num;
	return ( -1 * num );
}

float getRoot(float num){
	float gnumber;

	printf("Please enter guessed number: ");
	scanf("%f", &gnumber);

	while( abs24((gnumber * gnumber) - num) > EPSILON){
		printf("%f \n", gnumber);
		gnumber = ( num / abs24(gnumber) + gnumber) / 2;
	}
	printf("The square root is found  :  %f \n", gnumber );

} 



int main(){
	float num;
	printf("Enter the numbers you want to get the square root of ? ");
	scanf("%f", &num);
	getRoot(num);
	
	return 0;
}
