// Program to sort an array of integers into ascending order

#include <stdio.h>
#include <stdlib.h>

void sort (int *a, int *last, int *ascending)
{
	int *i, *j;
	int temp;

	for ( i = a; i < last - 1; ++i ) {
		for ( j = i + 1; j < last; ++j ) {
			if ( (*ascending && *i > *j) || (!*ascending && *i < *j) ) {
				temp = *i;
				*i = *j;
				*j = temp;
			}
		}
	}
}

int main (void)
{
	int		*i, asc;
	int		array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
						  44, -3, -9, 12, 17, 22, 6, 11 };
	void	sort (int *a, int *last, int *ascending);

	printf ("The array before the sort:\n");

	for ( i = array; i < array + 16; ++i )
		printf ("%i ", *i);

	asc = 1;
	sort (array, &array[16], &asc);
	printf ("\n\nThe array after the ascending sort:\n");
	for ( i = array; i < array + 16; ++i )
		printf ("%i ", *i);

	asc = 0;
	sort (array, &array[16], &asc);
	printf ("\n\nThe array after the descending sort:\n");
	for ( i = array; i < array + 16; ++i )
		printf ("%i ", *i);
	printf ("\n");

	return 0;
}
