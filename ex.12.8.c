#include <stdio.h>

unsigned short int_size (void)
{
	unsigned short	size =  0;
	unsigned int	uint = ~0; // 0xffffffff

	for ( ; uint > 0; ++size ) {
		uint >>= 1;
	}

	return size;
}

unsigned short bit_test (unsigned int uint, int n)
{
	unsigned short	shift_width = int_size() - 1 - n;
	unsigned int	bit_mask    = 1 << shift_width;

	return (uint & bit_mask) >> shift_width;
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

void bitpat_set (unsigned int *source, unsigned int pattern, unsigned short starting_bit, unsigned short field_size)
{
	printf("source:\t\t");
	print_bits(*source);

	unsigned short source_bits = 0;
	while ( (*source >> source_bits) > 0 ) {
		++source_bits;
	}

	unsigned short size = int_size();
	unsigned short shift_width = size - field_size;
	unsigned int mask = (~0u << shift_width) >> (size - source_bits + starting_bit);
	pattern <<= (source_bits - field_size - starting_bit);

	*source = (*source & ~mask) | pattern;

	printf("pattern:\t");
	print_bits(pattern);

	printf("source:\t\t");
	print_bits(*source);
}

int main (void)
{
	unsigned int x = 0x7fffu;

	bitpat_set (&x, 0x55u, 0, 8);

	return 0;
}
