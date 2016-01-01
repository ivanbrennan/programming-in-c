// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int		p, d;
	bool	isPrime;

	for ( p = 2; p <= 50; p += (p == 2) ? 1 : 2 ) {

		isPrime = true;

		for ( d = 3; isPrime && d < p; d += 2 )
			if ( p % d == 0 )
				isPrime = false;

		if ( isPrime != false )
			printf ("%i  ", p);
	}

	printf ("\n");
	return 0;
}
