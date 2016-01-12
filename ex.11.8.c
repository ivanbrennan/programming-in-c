#include <stdio.h>

void sort3 (int *n1, int *n2, int *n3)
{
	int temp;

	if ( *n1 > *n2 ) {
		temp = *n1;
		*n1  = *n2;
		*n2  = temp;
	}
	if ( *n2 > *n3 ) {
		temp = *n2;
		*n2  = *n3;
		*n3  = temp;
	}
	if ( *n1 > *n2 ) {
		temp = *n1;
		*n1  = *n2;
		*n2  = temp;
	}
}

int main (void)
{
	int i1 = 9;
	int i2 = 5;
	int i3 = 3;

	printf ("i1 = %i, i2 = %i, i3 = %i\n", i1, i2, i3);

	sort3 (&i1, &i2, &i3);

	printf ("i1 = %i, i2 = %i, i3 = %i\n", i1, i2, i3);

	return 0;
}
