#include <stdio.h>


int main(){
	int arr[150];

	// initializing array
	for(int i = 2, j = 0; j < 150; i++, j++){
		arr[j] = i;
	}
	
	
	for(int i = 2; i < 152; i++){
		for(int k = 2; k < 152; k++){
			int val = i * k;
			if(val <= 151){
				arr[(val-2)] = 1;
			}
		}
	}

	for(int i = 0; i < 150; i++){
		if( arr[i] != 1) {
			printf("%d \n", arr[i]);
		}
	}

	


	return 0;
}
