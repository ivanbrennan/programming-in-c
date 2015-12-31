#include <stdio.h>

int main (void)
{
	printf ("(3.31 x 10⁻⁸ x 2.01 x 10⁻⁷) / (7.16 x 10⁻⁶ + 2.01 x 10⁻⁸) = %g\n", 
			(3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8));

	return 0;
}
