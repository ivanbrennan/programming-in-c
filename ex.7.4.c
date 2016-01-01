// Calculate the average of an array of floating-point values
#include <stdio.h>

int main (void)
{
	float values[10] = {
		0.1, 1.2, 2.3, 3.4, 4.5,
		5.6, 6.7, 7.8, 8.9, 9.0
	};
	int count = sizeof(values) / sizeof(float);

	float sum;

	for ( int i = 0; i < count; i++ )
		sum += values[i];

	printf ("Average: %.2f\n", sum / count);

	return 0;
}
