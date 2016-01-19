#include <stdio.h>

int main (void)
{
	// shift a negative int right
	// 1's shifted in through MSB : arithmetic shift
	// 0's shifted in through MSB : logical shift

	signed int i = -8;
	// signed int: -2
	// --------------
	// binary 11111111 11111111 11111111 11111110
	// octal  3 7  7   7  7  7   7  7  7   7  6
	// hex    f   f    f   f    f   f    f   e
	//
	// arithmetic >>
	// signed int: -1
	// --------------
	// binary 11111111 11111111 11111111 11111111
	// octal  3 7  7   7  7  7   7  7  7   7  7
	// hex    f   f    f   f    f   f    f   f
	//
	// logical >>
	// signed int: 2147483647
	// --------------
	// binary 01111111 11111111 11111111 11111111
	// octal  1 7  7   7  7  7   7  7  7   7  7
	// hex    7   f    f   f    f   f    f   f

	printf ("hex: %x, oct: %o, dec: %i\n", i, i, i);

	signed int j, n = 1;

	for ( n = 1; n <= 3; ++n ) {
		j = i >> n;

		if ( j < 0 )
			printf ("arithmetic: %i >> %i = %i\n", i, n, j);
		else
			printf ("logical: %i >> %i = %i\n", i, n, j);
	}

	return 0;
}
