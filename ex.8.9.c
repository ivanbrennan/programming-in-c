#include <stdio.h>

int gcd (int u, int v)
{
	int temp;

	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int lcm (int u, int v)
{
	if ( u >= 0 && v >= 0 ) {
		return (u * v) / gcd (u, v);
	} else {
		printf ("Called lcm function with negative argument(s)\n");
		return -1;
	}
}

int main (void)
{
	int result;

	result = lcm (150, 35);
	printf ("The lcm of 150 and 35 is %i\n", result);

	result = lcm (15, 10);
	printf ("The lcm of 15 and 10 is %i\n", result);

	printf ("The lcm of 83 and 240 is %i\n", lcm (83, 240));

	return 0;
}
