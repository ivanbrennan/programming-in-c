// Program to generate every fifth triangular number from 5 to 50

#include <stdio.h>

int main (void)
{
	printf ("EVERY FIFTH TRIANGULAR NUMBER FROM 5 TO 50\n\n");
	printf (" n       triangular number\n");
	printf ("---      -----------------\n");

	for ( int n = 5; n <= 50; n += 5 )
		printf ("%2i        %4i\n", n, n * (n + 1) / 2);

	return 0;
}
