// Program to sort an array of integers into ascending order

#include <stdio.h>

#define length	16

int array[length] = {
	34, -5, 6, 0, 12, 100, 56, 22,
	44, -3, -9, 12, 17, 22, 6, 11
};
int ascending;

void sort (void)
{
	int i, j, temp;

	for ( i = 0; i < length - 1; ++i )
		for ( j = i + 1; j < length; ++j )
			if ( (ascending && array[i] > array[j]) || (!ascending && array[i] < array[j]) ) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
}

int main (void)
{
	int		i;
	void	sort (void);

	printf ("The array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	ascending = 1;
	sort ();
	printf ("\n\nThe array after the ascending sort:\n");
	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);

	ascending = 0;
	sort ();
	printf ("\n\nThe array after the descending sort:\n");
	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);
	printf ("\n");

	return 0;
}
