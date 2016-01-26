#include <stdio.h>

enum month {
	january, february, march, april, may, june,
	july, august, september, october, november, december
};

char *monthName (enum month aMonth)
{
	char *monthNames[12] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};

	return monthNames[aMonth];
}

int main (void)
{
	enum month aMonth = october;
	printf ("%s\n", monthName (aMonth));

	return 0;
}
