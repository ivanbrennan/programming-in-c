// Generate a table of the first 10 factorials

#include <stdio.h>

int main (void)
{
	printf ("FIRST 10 FACTORIALS\n\n");
	printf (" n         n!\n");
	printf ("---       -------\n");

	for ( int n = 1; n <= 10; ++n ) {
		int factorial = 1;

		for ( int i = n; i > 1; --i)
			factorial *= i;

		printf ("%2i        %7i\n", n, factorial);
	}

	return 0;
}
