// Program to display squares

#include <stdio.h>

int main (void)
{
	printf ("THE FIRST TEN SQUARES\n\n");
	printf (" n       n²\n");
	printf ("---     ---\n");

	for ( int n = 1; n <= 10; ++n )
		printf ("%2i      %3i\n", n, n * n);

	return 0;
}
