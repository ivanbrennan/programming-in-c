#include "prog.15.date.h"

// Fuction to calculate tomorrow's date

Date dateUpdate (Date today)
{
	Date tomorrow;

	if ( today.day != numberOfDays (today) )
		setDate (tomorrow, today.month, today.day + 1, today.year);
	else if ( today.month == December ) // end of year
		setDate (tomorrow, January, 1, today.year + 1);
	else								// end of month
		setDate (tomorrow, today.month + 1, 1, today.year);

	return tomorrow;
}
