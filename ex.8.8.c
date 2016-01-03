// Solve a quadratic equation

#include <stdio.h>

float absoluteValue (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

// Function to compute the square root of a number

float squareRoot (float x)
{
	const float	epsilon	= .00001;
	float		guess	= 1.0;

	while ( absoluteValue (guess * guess - x) >= epsilon )
		guess = ( x / guess + guess ) / 2.0;

	return guess;
}

int main (void)
{
	int a, b, c;
	printf ("Enter values for a, b, and c:\n");
	scanf  ("%i %i %i", &a, &b, &c);

	int discriminant = (b * b) - (4 * a * c);

	if ( discriminant < 0 ) {
		printf ("The roots of %ix² + %ix + %i = 0 are imaginary\n", a, b, c);
	} else {
		float discriminantRoot = squareRoot (discriminant);

		int root1 = (-b + discriminantRoot) / (2.0 * a);
		int root2 = (-b - discriminantRoot) / (2.0 * a);

		printf ("The roots of %ix² + %ix + %i = 0 are %i and %i\n",
				a, b, c, root1, root2);
	}

	return 0;
}
