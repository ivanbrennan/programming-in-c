// Program to demonstrate the bitwise AND operator
#include <stdio.h>

int main (void)
{
	unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u;
	/*
	 *  077 => 000 111 111
	 * 0150 => 001 101 000
	 * 0210 => 010 001 000
	 */

	/*
	 *   000 111 111
	 * & 001 101 000
	 * -------------
	 *   000 101 000 => 050
	 */
	printf ("%o  ", word1 & word2);

	/*
	 *   000 111 111
	 * & 000 111 111
	 * -------------
	 *   000 111 111 => 077
	 */
	printf ("%o  ", word1 & word1);

	/*
	 *   000 111 111
	 *   001 101 000
	 * & 010 001 000
	 * -------------
	 *   000 001 000 => 010
	 */
	printf ("%o  ", word1 & word2 &word3);

	/*
	 *   000 111 111
	 * & 000 000 001
	 * -------------
	 *   000 000 001 => 01
	 */
	printf ("%o\n", word1 & 1);

	return 0;
}
