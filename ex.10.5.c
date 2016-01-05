#include <stdio.h>

int findString (char text[], char pattern[])
{
	int i, j;

	for ( i = 0; text[i] != '\0'; ++i ) {
		j = 0;

		while ( pattern[j] != '\0' && pattern[j] == text[i + j] ) {
			++j;
		}

		if ( pattern[j] == '\0' ) {
			return i;
		}
	}

	return -1;
}

int main (void)
{
	int index;

	// expect 3
	index = findString ("a chatterbox", "hat");
	printf ("%i\n", index);

	// expect -1
	index = findString ("a", "aa");
	printf ("%i\n", index);

	// expect -1
	index = findString ("a chatterbox", "hatx");
	printf ("%i\n", index);

	// expect -1
	index = findString ("", "hat");
	printf ("%i\n", index);

	// expect 0
	index = findString ("a chatterbox", "");
	printf ("%i\n", index);

	// expect 0
	char a000[] = {'a', '\0', '\0', '\0' };
	index = findString (a000, "a");
	printf ("%i\n", index);

	return 0;
}
