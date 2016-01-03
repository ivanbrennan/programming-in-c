// Calculate the number of days between two arbitrary dates

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int yearInt (int year, int month)
{
	if ( month <= 2 )
		return year - 1;
	else
		return year;
}

int monthInt (int month)
{
	if ( month <= 2 )
		return month + 13;
	else
		return month + 1;
}

int dateInt (struct date d)
{
	int yearN = 1461 * yearInt (d.year, d.month) / 4;
	int monthN = 153 * monthInt (d.month) / 5;

	return yearN + monthN + d.day;
}

int main (void)
{
	struct date date1, date2;

	printf ("Type first date (mm dd yyyy): ");
	scanf  ("%i %i %i", &date1.month, &date1.day, &date1.year);

	printf ("Type second date (mm dd yyyy): ");
	scanf  ("%i %i %i", &date2.month, &date2.day, &date2.year);

	int n1 = dateInt (date1);
	int n2 = dateInt (date2);

	printf ("There are %i days between %i/%i/%.2i and %i/%i/%.2i\n", n2 - n1,
			date1.month, date1.day, date1.year % 100,
			date2.month, date2.day, date2.year % 100);

	return 0;
}
