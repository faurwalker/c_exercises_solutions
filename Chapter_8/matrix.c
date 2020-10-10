#include <stdio.h>

// Using only 3 X 5 matrix 

	
	
int main(){	
	void scalarMultiply(int rows, int columns, int matrix [rows][columns], int scalar);
	void displayMatrix(int rows, int columns, int matrix [rows][columns]);

	int matrix [3][5] = { {0,1,2,3,4},
			    {5,6,7,8,9},
			    {10,11,12,13,14}};

	displayMatrix(3,5,matrix);
	scalarMultiply(3,5,matrix, 2);
 	printf("\n\n");
	displayMatrix(3,5,matrix);	

	return 0;
}


void scalarMultiply(int rows, int columns, int matrix[rows][columns], int scalar){
	for(int i = 0; i < rows; i++){
		for(int j = 0; columns < 5; j++){
			matrix[i][j] *= scalar;
		}
	
	}
}

void displayMatrix(int rows, int columns, int matrix[rows][columns]){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			printf("%2d ", matrix[i][j]);
		}

	printf("\n");

	}
}


