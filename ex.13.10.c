#include <stdio.h>
#include <ctype.h>

#define	IS_SPECIAL(c)	!(isalpha(c)) && !(isdigit(c))

int main (void)
{
	printf ("islower:\n");
	printf ("a: %i\n",   islower('a'));
	printf ("z: %i\n",   islower('z'));
	printf ("A: %i\n",   islower('A'));
	printf ("Z: %i\n",   islower('Z'));
	printf ("0: %i\n",   islower('0'));
	printf ("9: %i\n",   islower('9'));
	printf ("!: %i\n\n", islower('!'));

	printf ("isupper:\n");
	printf ("a: %i\n",   isupper('a'));
	printf ("z: %i\n",   isupper('z'));
	printf ("A: %i\n",   isupper('A'));
	printf ("Z: %i\n",   isupper('Z'));
	printf ("0: %i\n",   isupper('0'));
	printf ("9: %i\n",   isupper('9'));
	printf ("!: %i\n\n", isupper('!'));

	printf ("isalpha:\n");
	printf ("a: %i\n",   isalpha('a'));
	printf ("z: %i\n",   isalpha('z'));
	printf ("A: %i\n",   isalpha('A'));
	printf ("Z: %i\n",   isalpha('Z'));
	printf ("0: %i\n",   isalpha('0'));
	printf ("9: %i\n",   isalpha('9'));
	printf ("!: %i\n\n", isalpha('!'));

	printf ("isdigit:\n");
	printf ("a: %i\n",   isdigit('a'));
	printf ("z: %i\n",   isdigit('z'));
	printf ("A: %i\n",   isdigit('A'));
	printf ("Z: %i\n",   isdigit('Z'));
	printf ("0: %i\n",   isdigit('0'));
	printf ("9: %i\n",   isdigit('9'));
	printf ("!: %i\n\n", isdigit('!'));

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
