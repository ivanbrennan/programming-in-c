#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry (struct entry *insertion, struct entry *previous)
{
	insertion->next = previous->next;
	previous->next  = insertion;
}

void printEntries (struct entry head)
{
	struct entry *ptr = head.next;

	while ( ptr != (struct entry *) 0 ) {
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}
}

int main (void)
{
	struct entry n3 = { .value = 3, .next = (struct entry *) 0 };
	struct entry n2 = { .value = 2, .next = &n3 };
	struct entry n1 = { .value = 1, .next = &n2 };

	struct entry n0 = { .next = &n1 };
	struct entry n9  = { .value = 9 };

	printEntries (n0);
	insertEntry (&n9, &n0);
	printEntries (n0);

	return 0;
}
