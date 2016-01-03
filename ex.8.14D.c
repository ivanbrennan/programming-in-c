#include <stdio.h>

#define nRows	4
#define nCols	5

int matrix1[nRows][nCols] = {
	{ 11, 12, 13, 14, 15 },
	{ 21, 22, 23, 24, 25 },
	{ 31, 32, 33, 34, 35 },
	{ 41, 42, 43, 44, 45 },
};
int matrix2[nCols][nRows] = { 0 };

void transposeMatrix (void)
{
	int i, j;

	for ( i = 0; i < nRows; ++i )
		for ( j = 0; j < nCols; ++j )
			matrix2[j][i] = matrix1[i][j];
}

int main (void)
{
	int i, j;

	printf ("matrix1:\n");
	for ( i = 0; i < 4; ++i ) {
		for ( j = 0; j < 5; ++j )
			printf ("%3i", matrix1[i][j]);
		printf ("\n");
	}

	transposeMatrix ();

	printf ("...transposed to matrix2:\n");
	for ( i = 0; i < 5; ++i ) {
		for ( j = 0; j < 4; ++j )
			printf ("%3i", matrix2[i][j]);
		printf ("\n");
	}

	return 0;
}
