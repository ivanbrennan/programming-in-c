#include <stdio.h>
#include <stdlib.h>

#ifdef DEBON
#	define DEBUG(level, fmt, ...) \
		if (Debug >= level) \
			fprintf (stderr, fmt, __VA_ARGS__)
#else
#	define DEBUG(level, fmt, ...)
#endif

int Debug = 0;

int process (int i1, int i2)
{
	int val;

	DEBUG (1, "process (%i, %i)\n", i1, i2);
	val = i1 * i2;
	DEBUG (3, "return %i\n", val);

	return val;
}

int main (int argc, char *argv[])
{
	int arg1 = 0, arg2 = 0;

	if ( argc > 1 )
		arg1 = atoi (argv[1]);
	if ( argc > 2 )
		arg2 = atoi (argv[2]);
	if ( argc == 4 )
		Debug = atoi (&argv[3][2]);

	DEBUG (2, "processed %i arguments\n", argc - 1);
	DEBUG (2, "arg1 = %i, arg2 = %i\n", arg1, arg2);
	printf ("%d\n", process (arg1, arg2));

	return 0;
}
