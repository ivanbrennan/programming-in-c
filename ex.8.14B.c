// sum the elements in an array of integers
#include <stdio.h>

#define length	8

int array[length];

int arraySum (void)
{
	int i, sum = 0;

	for ( i = 0; i < length; ++i )
		sum += array[i];

	return sum;
}

int main (void)
{
	int i;

	for ( i = 0; i < length; ++i )
		array[i] = i;

	printf ("The array:\n");
	for ( i = 0; i < length - 1; ++i )
		printf ("%i, ", array[i]);
	printf ("%i\n", array[length - 1]);

	printf ("sums to %i\n", arraySum ());

	return 0;
}
