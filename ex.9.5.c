// Program to update date and time

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

bool isMidnight (struct time t)
{
	return t.hour == 0 && t.minutes == 0 && t.seconds == 0;
}

struct time timeUpdate (struct time t)
{
	struct time updated = {
		.hour = t.hour, .minutes = t.minutes, .seconds = t.seconds + 1
	};

	if ( updated.seconds == 60 ) {
		updated.seconds = 0;
		updated.minutes += 1;

		if ( updated.minutes == 60 ) {
			updated.minutes = 0;
			updated.hour += 1;

			if ( updated.hour == 24 ) {
				updated.hour = 0;
			}
		}
	}

	return updated;
}

struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if ( today.day != numberOfDays (today) ) {
		tomorrow = (struct date) { today.month, today.day + 1, today.year };
	}
	else if ( today.month == 12 ) {		// end of year
		tomorrow = (struct date) { 1, 1, today.year + 1 };
	}
	else {								// end of month
		tomorrow = (struct date) { 1, today.month + 1, today.year };
	}

	return tomorrow;
}

// Function to find the number of days in a month

int numberOfDays (struct date d)
{
	int		days;
	bool	isLeapYear (struct date d);

	const int daysPerMonth[12] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};

	if ( isLeapYear (d) == true && d.month == 2 )
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

// Function to determine if it's a leap year

bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
		leapYearFlag = true;	// It's a leap year
	else
		leapYearFlag = false;	// Not a leap year

	return leapYearFlag;
}

struct dateAndTime clockKeeper (struct dateAndTime datetime)
{
	struct dateAndTime updated = { .stime = timeUpdate (datetime.stime) };

	if ( isMidnight (updated.stime) )
		updated.sdate = dateUpdate (datetime.sdate);
	else
		updated.sdate = datetime.sdate;

	return updated;
}

int main (void)
{
	struct dateAndTime datetime;

	printf ("Enter starting datetime (mm dd yyyy hh:mm:ss): ");
	scanf  ("%i %i %i %i:%i:%i",
			&datetime.sdate.month, &datetime.sdate.day, &datetime.sdate.year,
			&datetime.stime.hour, &datetime.stime.minutes, &datetime.stime.seconds);

	struct dateAndTime updated = clockKeeper (datetime);

	printf ("\nThe updated datetime is %i/%i/%.2i %.2i:%.2i:%.2i\n",
			updated.sdate.month, updated.sdate.day, updated.sdate.year,
			updated.stime.hour, updated.stime.minutes, updated.stime.seconds);

	return 0;
}
