// Display digits in English

#include <stdio.h>

int main (void)
{
	int number, digit;

	printf ("Type an integer\n");
	scanf  ("%i", &number);

	int power = 1;
	while ( number / power > 9 )
		power *= 10;

	do {
		digit = number / power;
		number -= digit * power;
		power /= 10;

		switch ( digit ) {
			case 0:
				printf ("zero ");
				break;
			case 1:
				printf ("one ");
				break;
			case 2:
				printf ("two ");
				break;
			case 3:
				printf ("three ");
				break;
			case 4:
				printf ("four ");
				break;
			case 5:
				printf ("five ");
				break;
			case 6:
				printf ("six ");
				break;
			case 7:
				printf ("seven ");
				break;
			case 8:
				printf ("eight ");
				break;
			case 9:
				printf ("nine ");
				break;
		}
	}
	while ( number != 0 );

	printf ("\n");

	return 0;
}
