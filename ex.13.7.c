#include <stdio.h>

#define	IS_LOWER_CASE(c)	('a' <= (c)) && ((c) <= 'z')
#define	IS_UPPER_CASE(c)	('A' <= (c)) && ((c) <= 'Z')
#define	IS_ALPHABETIC(c)	IS_LOWER_CASE(c) || IS_UPPER_CASE(c)

int main (void)
{
	printf ("a: %i\n", IS_ALPHABETIC('a'));
	printf ("z: %i\n", IS_ALPHABETIC('z'));
	printf ("A: %i\n", IS_ALPHABETIC('A'));
	printf ("Z: %i\n", IS_ALPHABETIC('Z'));
	printf ("1: %i\n", IS_ALPHABETIC('1'));

	return 0;
}
