#include <stdio.h>
#include <stdbool.h>

float absoluteValue (float n)
{
	if ( n < 0 )
		n = -n;

	return n;
}

float squareRoot (float n)
{
	float guess = 1.0;
	float epsilon = .0001;

	while ( absoluteValue ((guess * guess / n) - 1) > epsilon )
		guess = (guess + n / guess) / 2.0;

	return guess;
}

int prime (n)
{
	if ( n == 2 ) {
		return 1;
	} else if ( n > 2 ) {
		bool isPrime = true;
		int i;

		for ( i = 2; i <= squareRoot ((float) n); i += (i > 2) ? 2 : 1 )
			if ( n % i == 0 )
				return 0;

		return 1;
	} else {
		return 0;
	}
}

int main (void)
{
	int n;
	printf ("Which number do you want to check for prime? ");
	scanf  ("%i", &n);

	if ( prime (n) )
		printf ("%i is prime\n", n);
	else
		printf ("%i is not prime\n", n);

	return 0;
}
