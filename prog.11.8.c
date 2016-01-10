// Program to illustrate using pointers and functions

#include <stdio.h>

void test (int *int_pointer)
{
	*int_pointer = 100;
	printf ("int_pointer: %p\n", int_pointer);
	int_pointer += 1;
	printf ("int_pointer: %p\n", int_pointer);
}

int main (void)
{
	void test (int *int_pointer);
	int i = 50, *p = &i;

	printf ("Before the call to test i = %i\n", i);
	printf ("p: %p\n", p);

	test (p);
	printf ("After the call to test i = %i\n", i);
	printf ("p: %p\n", p);

	return 0;
}
