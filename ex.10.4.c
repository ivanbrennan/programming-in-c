#include <stdio.h>

void substring (const char source[], const int start, const int count,
				char result[])
{
	int i = 0;

	for ( i = 0; i < count && source[start + i] != '\0'; ++i ) {
		result[i] = source[start + i];
	}

	result[i] = '\0';
}

int main (void)
{
	char result[32];

	substring ("character", 4, 3, result);
	printf ("%s\n", result);

	substring ("two words", 4, 20, result);
	printf ("%s\n", result);

	return 0;
}
