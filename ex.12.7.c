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

unsigned int bitpat_get (unsigned int source, unsigned short starting_bit, unsigned short bit_count)
{
	unsigned short source_bits = 0;
	while ( (source >> source_bits) > 0 ) {
		++source_bits;
	}
	unsigned short shift_width = source_bits - starting_bit - bit_count;

	printf("source:\t");
	print_bits(source);

	unsigned int mask = ~0u >> (int_size() - bit_count);
	printf("mask:\t");
	print_bits(mask);

	mask <<= shift_width;
	printf("mask:\t");
	print_bits(mask);

	source &= mask;
	printf("source:\t");
	print_bits(source);

	return source >> shift_width;
}

int main (void)
{
	printf ("bitpat_get (0x2d, 2, 3) = %u\n\n", bitpat_get (0x2d, 2, 3));
	printf ("bitpat_get (0xe1f4, 0, 3) = %u\n\n", bitpat_get (0xe1f4, 0, 3));
	printf ("bitpat_get (0xe1f4, 3, 5) = %u\n", bitpat_get (0xe1f4, 3, 5));

	return 0;
}
