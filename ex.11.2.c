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

void printEntries (struct entry *ptr)
{
	while ( ptr != (struct entry *) 0 ) {
		printf ("%i\n", ptr->value);
		ptr = ptr->next;
	}
}

int main (void)
{
	struct entry *listPtr;
	struct entry n3 = { .value = 3, .next = (struct entry *) 0 };
	struct entry n2 = { .value = 2, .next = &n3 };
	struct entry n1 = { .value = 1, .next = &n2 };
	listPtr = &n1;
	struct entry x  = { .value = 9 };

	printEntries (listPtr);
	insertEntry (&x, &n2);
	printEntries (listPtr);

	return 0;
}
