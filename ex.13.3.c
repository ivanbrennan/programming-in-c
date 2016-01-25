#include <stdio.h>

#define	MIN(x, y)	( (x) <= (y) ) ? (x) : (y)

int main (void)
{
	printf ("MIN(3, -4) = %i\n", MIN(3, -4));

	return 0;
}
