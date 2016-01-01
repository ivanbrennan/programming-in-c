// Test the divisibility of two use-supplied integers

#include <stdio.h>

int main (void)
{
	int value1, value2;

	printf ("Enter two integers\n");
	scanf  ("%i %i", &value1, &value2);

	if ( value1 % value2 == 0 )
		printf ("%i is evenly divisible by %i\n", value1, value2);
	else
		printf ("%i is not evenly divisible by %i\n", value1, value2);

	return 0;
}
