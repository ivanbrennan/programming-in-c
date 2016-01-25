#include <stdio.h>

#define SHIFT(num, n) ( (n > 0) ? (num >>= n) : (num <<= -n) )

int main (void)
{
	unsigned int num = 3;

	SHIFT(num, 1);
	printf ("%u\n", num);
	SHIFT(num, -2);
	printf ("%u\n", num);

	return 0;
}
