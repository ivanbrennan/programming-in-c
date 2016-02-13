#include <stdlib.h>
#include <stddef.h>

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

	return 0;
}
