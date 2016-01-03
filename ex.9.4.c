// Calculate the day of the week for an arbitrary date

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

int weekDayInt (struct date d)
{
	int yearN = 1461 * yearInt (d.year, d.month) / 4;
	int monthN = 153 * monthInt (d.month) / 5;

	return (yearN + monthN + d.day - 621049) % 7;
}

int main (void)
{
	const char weekDays[7][10] = {
		"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"
	};
	struct date d;

	printf ("Which date (mm dd yyyy) do you want to know about? ");
	scanf  ("%i %i %i", &d.month, &d.day, &d.year);

	int index = weekDayInt (d);

	printf ("%i/%i/%.2i falls on a %s\n",
			d.month, d.day, d.year % 100, weekDays[index]);

	return 0;
}
