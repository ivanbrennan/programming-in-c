#include <stdio.h>
#include <stdbool.h>

int findString (const char text[], const char pattern[])
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

void insertString (char text[], const char ins[], int index)
{
	// get length of inserted string
	int ins_len = 0;
	while ( ins[ins_len] != '\0' ) {
		++ins_len;
	}

	// get length of text string
	int text_len = 0;
	while ( text[text_len] != '\0' ) {
		++text_len;
	}

	int i;
	for ( i = text_len + ins_len; i - ins_len >= index; --i ) {
		text[i] = text[i - ins_len];
	}
	for ( i = 0; i < ins_len; ++i ) {
		text[index + i] = ins[i];
	}
}

bool replaceString (char text[], const char s1[], const char s2[])
{
	int index = findString (text, s1);

	if ( index >= 0 ) {
		int rm_length = 0;
		while ( s1[rm_length] != '\0' ) {
			++rm_length;
		}

		removeString (text, index, rm_length);
		insertString (text, s2, index);

		return true;
	} else {
		return false;
	}
}

int main (void)
{
	char text[50] = "  this and  that or    these and those  ";

	printf ("text: %s\n\n", text);

	printf ("Removing spaces...\n");
	while ( replaceString (text, " ", "") );

	printf ("text: %s\n", text);

	return 0;
}
