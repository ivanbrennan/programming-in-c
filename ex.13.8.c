#include <stdio.h>

#define	IS_LOWER_CASE(c)	('a' <= (c)) && ((c) <= 'z')
#define	IS_UPPER_CASE(c)	('A' <= (c)) && ((c) <= 'Z')
#define	IS_ALPHABETIC(c)	IS_LOWER_CASE(c) || IS_UPPER_CASE(c)
#define	IS_DIGIT(c)		('0' <= (c)) && ((c) <= '9')
#define	IS_SPECIAL(c)		!(IS_ALPHABETIC(c)) && !(IS_DIGIT(c))

int main (void)
{
	printf ("IS_DIGIT:\n");
	printf ("a: %i\n",   IS_DIGIT('a'));
	printf ("z: %i\n",   IS_DIGIT('z'));
	printf ("A: %i\n",   IS_DIGIT('A'));
	printf ("Z: %i\n",   IS_DIGIT('Z'));
	printf ("0: %i\n",   IS_DIGIT('0'));
	printf ("9: %i\n",   IS_DIGIT('9'));
	printf ("!: %i\n\n", IS_DIGIT('!'));

	printf ("IS_SPECIAL:\n");
	printf ("a: %i\n",   IS_SPECIAL('a'));
	printf ("z: %i\n",   IS_SPECIAL('z'));
	printf ("A: %i\n",   IS_SPECIAL('A'));
	printf ("Z: %i\n",   IS_SPECIAL('Z'));
	printf ("0: %i\n",   IS_SPECIAL('0'));
	printf ("9: %i\n",   IS_SPECIAL('9'));
	printf ("!: %i\n\n", IS_SPECIAL('!'));

	return 0;
}
