#include <stdio.h>

double x;
static double result;

static void doSquare (void)
{
	double square (void);

	x = 2.0;
	result = square ();
}

int main (void)
{
	doSquare ();
	printf ("%g\n", result);

	return 0;
}
