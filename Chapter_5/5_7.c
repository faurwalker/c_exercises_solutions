#include <stdio.h>


int main(){	
	int dollars, cents , count;

	for ( count = 1; count <= 10; ++count){
		printf("Enter dollars: ");
		scanf("%i", &dollars);
		printf("Enter cents: ");
		scanf("%di", &cents);
		printf("%.2i\n", cents);
		printf("$%i.%.2i\n\n", dollars, cents);
	}

	return 0;
}
