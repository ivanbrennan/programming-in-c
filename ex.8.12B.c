#include <stdio.h>

void transposeMatrix (int nRows, int nCols,
					  int matrix1[nRows][nCols], int matrix2[nCols][nRows])
{
	int i, j;

	for ( i = 0; i < nRows; ++i )
		for ( j = 0; j < nCols; ++j )
			matrix2[j][i] = matrix1[i][j];
}

int main (void)
{
	int i, j;
	int matrix1[4][5] = {
		{ 11, 12, 13, 14, 15 },
		{ 21, 22, 23, 24, 25 },
		{ 31, 32, 33, 34, 35 },
		{ 41, 42, 43, 44, 45 },
	};
	int matrix2[5][4] = { 0 };

	printf ("matrix1:\n");
	for ( i = 0; i < 4; ++i ) {
		for ( j = 0; j < 5; ++j )
			printf ("%3i", matrix1[i][j]);
		printf ("\n");
	}

	transposeMatrix (4, 5, matrix1, matrix2);

	printf ("...transposed to matrix2:\n");
	for ( i = 0; i < 5; ++i ) {
		for ( j = 0; j < 4; ++j )
			printf ("%3i", matrix2[i][j]);
		printf ("\n");
	}

	return 0;
}
