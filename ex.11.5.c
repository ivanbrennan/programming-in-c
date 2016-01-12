#include <stdio.h>

struct entry
{
	int value;
	struct entry *previous;
	struct entry *next;
};

void roundTrip (const struct entry *ptr)
{
	while ( ptr->next != (struct entry *) 0 ) {
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}
	while ( ptr->previous != (struct entry *) 0 ) {
		printf ("%i\n", ptr->value);
		ptr = ptr->previous;
	}
	printf ("%i\n", ptr->value);
}

int main (void)
{
	struct entry *nNull = (struct entry *) 0;

	struct entry n1 = { .value = 1, .previous = nNull };
	struct entry n2 = { .value = 2, .previous = &n1 };
	struct entry n3 = { .value = 3, .previous = &n2 };

	n1.next = &n2;
	n2.next = &n3;
	n3.next = nNull;

	roundTrip (&n1);

	return 0;
}
