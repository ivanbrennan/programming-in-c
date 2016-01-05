// Function to convert a string to an integer

#include <stdio.h>

int strToInt (const char string[])
{
	int i = 0, intValue, result = 0, sign = 1;

	if ( string[0] == '-' ) {
		++i;
		sign *= -1;
	}

	for ( ; string[i] >= '0' && string[i] <= '9'; ++i )
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	return sign * result;
}

int main (void)
{
	int strToInt (const char string[]);

	printf ("%i\n", strToInt("245"));
	printf ("%i\n", strToInt("100") + 25);
	printf ("%i\n", strToInt("13x5"));

	printf ("%i\n", strToInt("-245"));
	printf ("%i\n", strToInt("-100") + 25);
	printf ("%i\n", strToInt("-13x5"));

	return 0;
}
