#include <stdio.h>

int main()
{
	struct thing
	{
		char a1[3];
		char a2[3];
	};

	struct thing it = {
		{ 'a', 'b', 'c' }, { 'd', '\0', 'f' }
	};

	printf ("it: %p\n", &it);

	printf ("it.a1: %p\n", it.a1);
	printf ("it.a1[0] (%p): %c\n", &(it.a1[0]), it.a1[0]);
	printf ("it.a1[1] (%p): %c\n", &(it.a1[1]), it.a1[1]);
	printf ("it.a1[2] (%p): %c\n", &(it.a1[2]), it.a1[2]);

	printf ("it.a2: %p\n", it.a2);
	printf ("it.a2[0] (%p): %c\n", &(it.a2[0]), it.a2[0]);
	printf ("it.a2[1] (%p): %c\n", &(it.a2[1]), it.a2[1]);
	printf ("it.a2[2] (%p): %c\n", &(it.a2[2]), it.a2[2]);

	printf ("string? %s\n", it.a1);
}
