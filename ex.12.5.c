#include <stdio.h>

unsigned short int_size (void)
{
	unsigned short	size =  0;
	unsigned int	i    = ~0;

	while ( i > 0 ) {
		i >>= 1;
		size++;
	}

	return size;
}

unsigned short bit_test (unsigned int uint, int n)
{
	unsigned short	shift_width = int_size() - 1 - n;
	unsigned int	bit_mask    = 1 << shift_width;

	return (uint & bit_mask) >> shift_width;
}

unsigned int bit_set (unsigned int uint, int n)
{
	unsigned int bit_mask = 1 << (int_size() - 1 - n);

	return uint | bit_mask;
}

void print_bits (unsigned int uint)
{
	for ( int n = 0, max = int_size(); n < max; ++n ) {
		printf ("%u", bit_test(uint, n));
		if ( n % 8 == 7 ) {
			printf (" ");
		}
	}
	printf ("\n");
}

int main (void)
{
	unsigned int uint = 0525u; // 101 010 101

	for ( int n = 0, max = int_size(); n < max; ++n ) {
		print_bits (bit_set(uint, n));
	}

	return 0;
}
