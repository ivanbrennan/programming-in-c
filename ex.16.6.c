#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void	printnlines (int n, FILE *file);
int		more_to_read (FILE *file);
int		user_continue (void);
void	clear_stdin (void);

int main (void)
{
	FILE *file = fopen ("testfile", "r");

	do {
		printnlines (20, file);
	} while ( more_to_read (file) && user_continue () );

	return 0;
}

void printnlines (int n, FILE *file)
{
	char buffer[MAX_LINE_LENGTH];

	for ( int i = 0; i < n; ++i ) {
		if ( fgets (buffer, MAX_LINE_LENGTH, file) != NULL ) {
			fputs (buffer, stdout);
		} else {
			break;
		}
	}
}

int more_to_read (FILE *file)
{
	return file->_r;
}

int user_continue (void)
{
	char input[MAX_LINE_LENGTH];
	fgets (input, MAX_LINE_LENGTH, stdin);

	if ( strchr (input, '\n') == NULL ) {
		clear_stdin ();
	}

	return input[0] != 'q';
}

void clear_stdin (void)
{
	while ( getchar () != '\n' );
}
