#include <stdio.h>

int main (void)
{
	const int data[5] = {1, 2, 3, 4, 5};
	int i, sum;

	// infinite loop so we can debug with gdb
	for (i = 0; i >= 0; ++i)
		sum += data[i];

	printf ("sum = %i\n", sum);

	return 0;
}
