// Program to copy one file to another

#include <stdio.h>
#include <ctype.h>

void chomp (char* const s, int max_len)
{
	for ( int i = 0; i < max_len; i++ ) {
		if ( s[i] == '\n' ) {
			s[i] = '\0';
			break;
		}
	}
}

int main (void)
{
	char	inName[64], outName[64];
	FILE	*in, *out;
	int		c;

	// get file names from use

	printf ("Enter name of file to be copied: ");
	fgets  (inName, 64, stdin);
	chomp  (inName, 64);

	printf ("Enter name of output file: ");
	fgets  (outName, 64, stdin);
	chomp  (outName, 64);

	// open input and output files

	if ( (in = fopen (inName, "r")) == NULL ) {
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}

	if ( (out = fopen (outName, "w")) == NULL ) {
		printf ("Can't open %s for writing.\n", outName);
		return 2;
	}

	// copy in to out

	while ( (c = getc (in)) != EOF )
		putc (toupper (c), out);

	// Close open files

	fclose (in);
	fclose (out);

	printf ("File has been copied.\n");

	return 0;
}
