#include <stdio.h>

int main (void)
{
	float		f = 1.00;
	short int	i = 100;
	long int	l = 500L;
	double		d = 15.00;

	printf ("%p\n", l + i / (i * 2.0));

	return 0;
}
