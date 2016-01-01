// Use the Sieve of Erastosthenes to generate prime numbers
#include <stdio.h>

int main (void)
{
	const int n = 150;
	int P[n + 1] = { 0 };

	for ( int i = 2; i <= n; ++i ) {
		if ( P[i] == 0 )
			printf ("%i  ", i);
		for ( int j = 1; i * j <= n; ++j )
			P[i * j] = 1;
	}
	printf ("\n");

	return 0;
}
