#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber;

	printf ("What triangular number do you want? ");
	scanf  ("%i", &number);

	triangularNumber = 0;

	n = 1;
	while ( n <= number) {
		triangularNumber += n;
		++n;
	}

	printf ("Triangular number %i is %i\n", number, triangularNumber);

	return 0;
}
