// Program to raise an integer to a positive integer power

#include <stdio.h>

long int x_to_the_n (int x, int n)
{
	long int result = 1;

	while ( n > 0 ) {
		result *= x;
		--n;
	}

	return result;
}

int main (void)
{
	int x, n;

	printf ("What's x? ");
	scanf  ("%i", &x);

	printf ("What's n? ");
	scanf  ("%i", &n);

	printf ("\n%i to the %i = %li\n", x, n, x_to_the_n (x, n));

	return 0;
}
