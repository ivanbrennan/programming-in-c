#include <stdio.h>

int main (void)
{
	double x, polynomial;

	x = 2.55;
	polynomial = 3 * (x * x * x) - 5 * (x * x) + 6;

	printf ("3x³ - 5x² + 6 = %e\n", polynomial);

	return 0;
}
