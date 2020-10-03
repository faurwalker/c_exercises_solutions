// Program to generate a table of prime numbers
#include <stdio.h>
#include <time.h>



int main (void) {
	clock_t begin = clock();
	int p, d;
	_Bool isPrime;

	for ( p = 2; p <= 100; ++p ) {
		isPrime = 1;

		for ( d = 2; d < p; ++d ){
			if ( p % d == 0 ) isPrime = 0;
			}

		if ( isPrime != 0 ) printf ("%i ", p);
		
	}

	printf ("\n");
	clock_t end = clock();
	double time_spent = (double) ( end - begin );
	printf("%f \n", time_spent);
	return 0;
}


