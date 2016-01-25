#include <stdio.h>

#define	MAX(x, y)	((x >= y) ? x : y)
#define	MAX3(x, y, z)	MAX(x, MAX(y, z))

int main (void)
{
	printf ("MAX(3, -4, 7) = %i\n", MAX3(3, -4, 7));

	return 0;
}
