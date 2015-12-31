// Sum the digits of a user-supplied integer

#include <stdio.h>

int main (void)
{
	int number, sum;

	printf ("Enter an integer: ");
	scanf  ("%i", &number);

	printf ("The digits of %i sum to ", number);
	sum = 0;
	while ( number > 0 ) {
		sum += number % 10;
		number /= 10;
	}
	printf ("%i\n", sum);

	return 0;
}
