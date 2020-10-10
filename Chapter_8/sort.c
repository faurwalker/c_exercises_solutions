#include <stdio.h>

void sort( int arr[], int num );
void printarr( int arr[], int num);


int main(){
	int arr[] = { 5, 2, 1, 3, 4 };

	printarr(arr, 5);	
	sort(arr, 5);
	printarr(arr, 5);

	return 0;
}

void sort ( int arr[], int num ){
	for( int i = 0; i < num; i++){
		for(int j = i; j < num; j++){
			if(arr[i] > arr[j] && i != j){
				int local = arr[j];
				arr[j] = arr[i];
				arr[i] = local;
			}
		}
	}
}


void printarr(int arr[], int num){
	for(int i = 0; i < num; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
