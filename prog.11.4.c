// Program to illustrate structure pointers

#include <stdio.h>

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today, *datePtr;
	
	datePtr = &today;

	datePtr->month = 9;
	datePtr->day = 25;
	datePtr->year = 2004;

	printf ("Today's date is %i/%i/%.2i.\n",
			datePtr->month, datePtr->day, datePtr->year % 100);

	return 0;
}
