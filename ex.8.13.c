// Program to sort an array of integers into ascending order

#include <stdio.h>

void sort (int a[], int n, int ascending)
{
	int i, j, temp;

	for ( i = 0; i < n - 1; ++i )
		for ( j = i + 1; j < n; ++j )
			if ( (ascending && a[i] > a[j]) || (!ascending && a[i] < a[j]) ) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int main (void)
{
	int		i;
	int		array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
						  44, -3, -9, 12, 17, 22, 6, 11 };
	void	sort (int a[], int n, int ascending);

	printf ("The array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	sort (array, 16, 1);
	printf ("\n\nThe array after the ascending sort:\n");
	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	sort (array, 16, 0);
	printf ("\n\nThe array after the descending sort:\n");
	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);
	printf ("\n");

	return 0;
}
