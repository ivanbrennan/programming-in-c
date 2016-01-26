// Program to print the number of days in a month

#include <stdio.h>

int main (void)
{
	enum month	{ january = 1, february, march, april, may, june,
				  july, august, september, october, november, december };
	enum month	aMonth;
	int			days;

	printf ("Enter a month number: ");
	scanf ("%i", &aMonth);

	switch ( aMonth ) {
		case january:
		case march:
		case may:
		case july:
		case august:
		case october:
		case december:
			days = 31;
			break;
		case april:
		case june:
		case september:
		case november:
			days = 30;
			break;
		case february:
			days = 28;
			break;
		default:
			printf ("bad month number\n");
			days = 0;
			break;
	}

	if ( days != 0 )
		printf ("Number of days is %i\n", days);

	if ( aMonth == february )
		printf ("...or 29 if it's a leap year\n");

	return 0;
}
