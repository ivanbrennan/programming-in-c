// Program to illustrate rotation of integers

#include <stdio.h>

int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf ("%x\n", rotate (w1, 8));
	printf ("%x\n", rotate (w1, -16));
	printf ("%x\n", rotate (w2, 4));
	printf ("%x\n", rotate (w2, -2));
	printf ("%x\n", rotate (w1, 0));
	printf ("%x\n", rotate (w1, 44));

	return 0;
}

// Function to rotate an unsigned int left or right

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

unsigned int rotate (unsigned int value, int n)
{
	unsigned int result, bits;
	unsigned short size = int_size ();

	// scale down the shift count to a defined range
	
	if ( n > 0 )
		n = n % size;
	else
		n = -(-n % size);

	if ( n == 0 )
		result = value;
	else if ( n > 0 ) {		// left rotate
		bits = value >> (size - n);
		result = value << n | bits;
	} else {				// right rotate
		n = -n;
		bits = value << (size - n);
		result = value >> n | bits;
	}

	return result;
}
