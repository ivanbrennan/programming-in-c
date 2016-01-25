#include <stdio.h>

#define	IS_UPPER_CASE(c)	('A' <= (c)) && ((c) <= 'Z')

int main (void)
{
	printf ("a: %i\n", IS_UPPER_CASE('a'));
	printf ("z: %i\n", IS_UPPER_CASE('z'));
	printf ("A: %i\n", IS_UPPER_CASE('A'));
	printf ("Z: %i\n", IS_UPPER_CASE('Z'));
	printf ("1: %i\n", IS_UPPER_CASE('1'));

	return 0;
}
