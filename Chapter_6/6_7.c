// Program to generate a table of prime numbers
#include <stdio.h>
#include <time.h>



int main (void) {
	clock_t begin = clock();
	int p, d;
	_Bool isPrime;

	for ( p = 2; p <= 100; ++p ) {
		isPrime = 1;
		if(p % 2 == 0) isPrime = 0;
		else{	
			for ( d = 2; d < p; ++d ){
				if ( p % d == 0 ){ 
					isPrime = 0;
					break;	
				}
			}
		}

		if ( isPrime != 0 ) printf ("%i ", p);
		
	}

	printf ("\n");
	clock_t end = clock();
	double time_spent = (double) ( end - begin );
	printf("%f \n", time_spent);
	return 0;
}


