#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

struct entry
{
	int				value;
	struct entry	*next;
};

// add new entry to the end of linked list

struct entry *addEntry (struct entry *listPtr)
{
	// find the end of the list

	while ( listPtr->next != NULL )
		listPtr = listPtr->next;

	// get storage for new entry

	listPtr->next = (struct entry *) malloc (sizeof (struct entry));

	// add null to the new end of the list

	if ( listPtr->next != NULL )
		(listPtr->next)->next = (struct entry *) NULL;

	return listPtr->next;
}

int main (int argc, char *argv[])
{
	struct entry listHead = { .value = 1, .next = (struct entry *) 0 };
	struct entry *listPtr = &listHead;

	for (int i = 1; i < argc; ++i) {
		struct entry *newEntry = addEntry (listPtr);
		if ( newEntry != NULL ) {
			newEntry->value = atoi (argv[i]);
		}
		listPtr = newEntry;
	}

	listPtr = &listHead;
	while (listPtr != NULL) {
		printf ("%i\n", listPtr->value);
		listPtr = listPtr->next;
	}

	return 0;
}
