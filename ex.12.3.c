#include <stdio.h>

unsigned short int_size (void)
{
	unsigned short size = 0;

	unsigned int i = ~0;

	while ( i > 0 ) {
		i >>= 1;
		size++;
	}

	return size;
}

int main (void)
{
	printf ("type int contains %i bits\n", int_size ());

	return 0;
}
