#include <stdio.h>

void insertString (char text[], char ins[], int index)
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

int main (void)
{
	char text[17] = {
		't', 'h', 'e', ' ',
		'w', 'r', 'o', 'n', 'g', ' ',
		's', 'o', 'n', '\0',
		'\0', '\0', '\0'
	};

	insertString (text, "per", 10);

	// expect "the wrong person"
	printf ("%s\n", text);

	return 0;
}
