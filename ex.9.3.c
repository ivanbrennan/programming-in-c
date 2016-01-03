// Calculate the elapsed time between two arbitrary times

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time elapsed_time (struct time t1, struct time t2)
{
	int secondsDiff =
		(t2.hour * 3600 + t2.minutes * 60 + t2.seconds) -
		(t1.hour * 3600 + t1.minutes * 60 + t1.seconds);

	if ( secondsDiff < 0 )
		secondsDiff += 24 * 3600;

	struct time elapsed = {
		.hour    = secondsDiff / 3600,
		.minutes = (secondsDiff % 3600) / 60,
		.seconds = (secondsDiff % 3600) % 60
	};

	return elapsed;
}

int main (void)
{
	struct time time1, time2;

	printf ("Enter start time (hh:mm:ss): ");
	scanf  ("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

	printf ("Enter end time (hh:mm:ss): ");
	scanf  ("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

	struct time elapsed = elapsed_time (time1, time2);

	printf ("\nThe time elapsed between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i",
			time1.hour, time1.minutes, time1.seconds,
			time2.hour, time2.minutes, time2.seconds);

	printf (" is %.2i:%.2i:%.2i\n",
			elapsed.hour, elapsed.minutes, elapsed.seconds);

	return 0;
}
