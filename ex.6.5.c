// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
	int number, absolute_value, right_digit;

	printf ("Enter your number.\n");
	scanf  ("%i", &number);

	absolute_value = ( number < 0 ) ? -number : number;

	do {
		right_digit = absolute_value % 10;
		printf ("%i", right_digit);
		absolute_value /= 10;
	}
	while ( absolute_value != 0 );

	if ( number < 0 )
		printf ("-");

	printf ("\n");

	return 0;
}
