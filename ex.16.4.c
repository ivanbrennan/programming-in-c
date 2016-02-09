#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT	1024

char *get_filename (void);
void remove_newline (char* const str);
FILE *open_file (const char* const fname);
void print_if_line (FILE *file);
void print_interlaced (FILE *file_1, FILE *file_2);

int main (void)
{
	char *fname_1, *fname_2;
	FILE *file_1, *file_2;

	printf ("First file:  ");
	fname_1 = get_filename ();
	file_1  = open_file (fname_1);

	printf ("Second file: ");
	fname_2 = get_filename ();
	file_2  = open_file (fname_2);

	print_interlaced (file_1, file_2);

	free (fname_1);
	free (fname_2);

	return 0;
}

char *get_filename (void)
{
	char *fname = malloc (MAX_INPUT);

	fgets (fname, MAX_INPUT, stdin);
	remove_newline (fname);

	// discard excess input
	if ( strlen(fname) == MAX_INPUT - 1 ) {
		while ( getchar() != '\n' );
	}

	return fname;
}

void remove_newline (char * const str)
{
	char *newline;

	if ( (newline = strchr(str, '\n')) != NULL ) {
		*newline = '\0';
	}
}

FILE *open_file (const char * const fname)
{
	FILE* file;

	if ( (file = fopen (fname, "r")) == NULL ) {
		fprintf (stderr, "Unable to open %s for reading.\n", fname);
		exit (1);
	}

	return file;
}

void print_if_line (FILE *file)
{
	char buffer[MAX_INPUT];

	if ( fgets (buffer, MAX_INPUT, file) != NULL ) {
		fputs (buffer, stdout);
	}
}

void print_interlaced (FILE *file_1, FILE *file_2)
{
	while ( !(feof(file_1) && feof(file_2)) ) {
		print_if_line (file_1);
		print_if_line (file_2);
	}
}
