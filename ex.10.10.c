#include <stdio.h>
#include <stdbool.h>

struct entry
{
	char word[15];
	char definition[50];
};

int compareStrings (const char s1[], const char s2[])
{
	int i = 0;
	while ( s1[i] == s2[i] && s1[i] != '\0' ) {
		++i;
	}

	if ( s1[i] == s2[i] ) {
		return 0;
	} else if ( s1[i] < s2[i] ) {
		return -1;
	} else {
		return 1;
	}
}

// the notorious bubble sort
void sortDictionary (int length, struct entry dictionary[length])
{
	int i, j;
	bool swapped;

	for ( i = 1; i < length - 1; ++i ) {
		bool swapped = false;

		for ( j = 0; j < length - i; ++j ) {
			if ( compareStrings (dictionary[j].word, dictionary[j + 1].word) == 1 ) {
				struct entry temp = dictionary[j];
				dictionary[j]     = dictionary[j + 1];
				dictionary[j + 1] = temp;

				swapped = true;
			}
		}

		if ( !swapped ) {
			return;
		}
	}
}

void printDictionary (int length, struct entry dictionary[length])
{
	for ( int i = 0; i < length; ++i ) {
		printf ("%-12s %s\n", dictionary[i].word, dictionary[i].definition);
	}
}

int main (void)
{
	struct entry dictionary[100] =
	{
		{ "acumen",   "mentally sharp; keen"              },
		{ "abyss",    "a bottomless pit"                  },
		{ "agar",     "a jelly made from seaweed"         },
		{ "aardvark", "a burrowing African mammal"        },
		{ "aerie",    "a high nest"                       },
		{ "ajar",     "partially opened"                  },
		{ "aigrette", "an ornamental cluster of feathers" },
		{ "addle",    "to become confused"                },
		{ "ahoy",     "a nautical call of greeting"       },
		{ "affix",    "to append; attach"                 }
	};

	printDictionary (10, dictionary);

	printf ("\nSorting...\n\n");
	sortDictionary (10, dictionary);

	printDictionary (10, dictionary);

	return 0;
}
