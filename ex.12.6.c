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

int bitpat_search (unsigned int source, unsigned int pattern, unsigned int n)
{
	unsigned short	source_bits = 0;
	while ( (source >> source_bits) > 0 ) {
		++source_bits;
	}
	unsigned short	shift_width = int_size() - n;

	unsigned int	mask = ~0u >> shift_width;

	pattern &= mask;

	pattern <<= source_bits - n;
	mask    <<= source_bits - n;

	for ( int i = 0; i <= shift_width; ++i ) {
		if ( (source & mask) == pattern ) {
			return i;
		}
		mask    >>= 1;
		pattern >>= 1;
	}

	return -1;
}

int main (void)
{
	printf ("%i\n", bitpat_search (0xe1f4, 0x5, 3));

	return 0;
}
