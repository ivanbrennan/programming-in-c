#include <stdio.h>

void removeString (char text[], int index, int rm_length)
{
	int i;

	for ( i = 0; i < index; ++i )
		if ( text[i] == '\0' )
			return;

	for ( ; i < index + rm_length; ++i )
		if ( text[i] == '\0' ) {
			text[index] = '\0';
			return;
		}

	do {
		text[i - rm_length] = text[i];
	} while ( text[i++] != '\0' );
}

int main (void)
{
	char string1[] = "the wrong son";
	char string2[] = "the wrong son";
	char string3[] = "the wrong son";

	printf ("string1: %s\n", string1);
	printf ("string2: %s\n", string2);
	printf ("string3: %s\n\n", string3);

	printf ("removeString (string1, 13, 6)\n");
	removeString (string1, 13, 6);
	printf ("string1: %s\n\n", string1);

	printf ("removeString (string2, 11, 6)\n");
	removeString (string2, 11, 6);
	printf ("string2: %s\n\n", string2);

	printf ("removeString (string3, 4, 6)\n");
	removeString (string3, 4, 6);
	printf ("string3: %s\n\n", string3);

	return 0;
}
