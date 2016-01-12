#include <stdio.h>

int main (void)
{
	// declarations
	char	*message = "Programming in C is fun\n";
	char	message2[] = "You said it\n";
	char	*format = "x = %i\n";
	int		x = 100;

	/*** set 1 ***/
	printf ("Programming in C is fun\n");
	printf ("%s", "Programming in C is fun\n");
	printf ("%s", message);
	printf (message); // works but insecure

	/*** set 2 ***/
	printf ("You said it\n");
	printf ("%s", message2);
	printf (message2);
	printf ("%s", &message2[0]); // works but insecure

	/*** set 3 ***/
	printf ("said it\n");
	printf (message2 + 4);
	printf ("%s", message2 + 4);
	printf ("%s", &message2[4]); // works but insecure

	/*** set 4 ***/
	printf ("x = %i\n", x);
	printf (format, x);

	return 0;
}
