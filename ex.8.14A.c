#include <stdio.h>
#include <stdbool.h>

int n;
float guess = 1.0;

float absoluteValue (void)
{
	float value = (guess * guess / (float) n) - 1.0;

	if ( value < 0 )
		value = -value;

	return value;
}

float squareRoot (void)
{
	float epsilon = .0001;

	while ( absoluteValue () > epsilon )
		guess = (guess + (float) n / guess) / 2.0;

	return guess;
}

int prime (void)
{
	if ( n == 2 ) {
		return 1;
	} else if ( n > 2 ) {
		bool isPrime = true;
		int i;

		for ( i = 2; i <= squareRoot (); i += (i > 2) ? 2 : 1 )
			if ( n % i == 0 )
				return 0;

		return 1;
	} else {
		return 0;
	}
}

int main (void)
{
	printf ("Which number do you want to check for prime? ");
	scanf  ("%i", &n);

	if ( prime () )
		printf ("%i is prime\n", n);
	else
		printf ("%i is not prime\n", n);

	return 0;
}
