#include <stdio.h>
#include <stdbool.h>

bool alphabetic (const char c)
{
	return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') );
}

bool numeric (const char c)
{
	return ( c >= '0' && c <= '9' );
}

void readLine (char buffer[])
{
	char	character;
	int		i = 0;

	do
	{
		character = getchar ();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );

	buffer[i - 1] = '\0';
}

int countWords (const char string[])
{
	int		i, wordCount = 0;
	bool	inWord = false, inNumber = false;
	bool	alphabetic (const char c), numeric (const char c);

	for ( i = 0; string[i] != '\0'; ++i ) {
		if ( alphabetic(string[i]) ) {
			if ( !inWord && !inNumber ) {
				++wordCount;
				inWord = true;
			} else if ( inNumber ) {
				--wordCount;
				inNumber = false;
			}
		} else if ( string[i] == '\'' ) {
			if ( inNumber ) {
				inNumber = false;
			}
		} else if ( numeric(string[i]) ) {
			if ( !inWord && !inNumber ) {
				++wordCount;
				inNumber = true;
			} else if ( inWord ) {
				--wordCount;
				inWord = false;
			}
		} else if ( string[i] == ',' || string[i] == '.' ) {
			if ( inWord ) {
				inWord = false;
			}
		} else if ( string[i] == '-' ) {
			if ( inNumber ) {
				--wordCount;
				inNumber = false;
			}
		} else {
			inWord = false;
			inNumber = false;
		}
	}

	return wordCount;
}

int main (void)
{
	char	text[81];
	int		totalWords = 0;
	int		countWords (const char string[]);
	void	readLine (char buffer[]);
	bool	endOfText = false;

	printf ("Type in your text.\n");
	printf ("When you are done, press 'RETURN'.\n\n");

	while ( ! endOfText )
	{
		readLine (text);

		if ( text[0] == '\0' )
			endOfText = true;
		else
			totalWords += countWords (text);
	}

	printf ("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}
