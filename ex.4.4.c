#include <stdio.h>

int main (void)
{
	float fahrenheit, celsius;

	fahrenheit = 27.0;
	celsius = (fahrenheit - 32) / 1.8;

	printf ("27º F = %eº C\n", celsius);

	return 0;
}
