#include <stdio.h>

int main(){
//	const int elements = 10;  bug array can't be declared with variable or const var
	float arr[10] = {2.3, 1.5, 3.245, 1.24, 22.8, 25.5, 1.2, 7.2, 2.1, 5.7};
	float sum;
	
	for(int i = 0; i < elements; i++)
		sum += arr[i];
	printf("The average values is %f \n", sum / 10);


	return 0;
}
