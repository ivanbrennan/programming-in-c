#include <stdio.h>

#define ABSOLUTE_VALUE(n)	((n) >= 0) ? (n) : -(n)

int main (void)
{
	printf ("ABSOLUTE_VALUE( 9 + 3): %i\n", ABSOLUTE_VALUE( 9 + 3));
	printf ("ABSOLUTE_VALUE(-9 + 3): %i\n", ABSOLUTE_VALUE(-9 + 3));

	return 0;
}
