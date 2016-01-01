// Simple printing calculator

#include <stdio.h>

int main (void)
{
	printf ("Begin Calculations\n");

	double	number, accumulator;
	char	operator = '\0';

	while ( operator != 'E' ) {
		scanf  ("%lf %c", &number, &operator);

		switch ( operator ) {
			case '+':
				accumulator += number;
				break;
			case '-':
				accumulator -= number;
				break;
			case '*':
				accumulator *= number;
				break;
			case '/':
				if ( number != 0 ) {
					accumulator /= number;
					break;
				}
				else {
					printf ("Division by zero\n");
					continue;
				}
			case 'S':
				accumulator = number;
				break;
			case 'E':
				break;
			default:
				printf ("Unknown operator\n");
				continue;
		}

		printf ("= %f\n", accumulator);
	}
	printf ("End of Calculations.\n");

	return 0;
}
