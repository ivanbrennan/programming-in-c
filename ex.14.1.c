#include <stdio.h>

int howMany (void)
{
	return 2;
}

typedef int (* FunctionPtr) (void);

int main (void)
{
	FunctionPtr func;

	func = howMany;

	printf ("this many: %i\n", func ());

	return 0;
}
