// Divide two use-supplied integers

#include <stdio.h>

int main (void)
{
	int value1, value2;

	printf ("Enter two integers\n");
	scanf  ("%i %i", &value1, &value2);

	if ( value2 != 0 )
		printf ("%i / %i = %.3f\n", value1, value2, (float) value1 / value2);
	else
		printf ("Division by zero\n");

	return 0;
}
