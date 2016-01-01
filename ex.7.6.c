// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main (void)
{
	int prePrevFibonacci, prevFibonacci, Fibonacci, i;

	prePrevFibonacci = 0;
	prevFibonacci    = 1;

	printf ("%i\n%i\n", prePrevFibonacci, prevFibonacci);

	for ( i = 0; i < 13; ++i ) {
		Fibonacci = prePrevFibonacci + prevFibonacci;
		printf ("%i\n", Fibonacci);

		prePrevFibonacci = prevFibonacci;
		prevFibonacci    = Fibonacci;
	}

	return 0;
}
