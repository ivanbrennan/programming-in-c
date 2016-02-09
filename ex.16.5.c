#include <stdio.h>

#define MAX_INPUT	1024

int main (void)
{
	int		m, n;
	char	input[MAX_INPUT];

	printf ("Enter m: ");
	fgets  (input, MAX_INPUT, stdin);
	sscanf (input, " %i", &m);

	printf ("Enter n: ");
	fgets  (input, MAX_INPUT, stdin);
	sscanf (input, " %i", &n);

	FILE*	fp = fopen ("testfile", "r");

	while ( !feof(fp) ) {
		if ( fgets (input, MAX_INPUT, fp) != NULL ) {
			for ( int i = 0; i < n && i < MAX_INPUT; ++i ) {
				if ( input[i] == '\n' || input[i] == '\0' ) {
					break;
				}
				if ( m <= i+1 ) {
					fputc (input[i], stdout);
				}
			}
			fputc ('\n', stdout);
		}
	}

	return 0;
}
