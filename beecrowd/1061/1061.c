#include <stdio.h>

int main()
{
	int fDay, tDay, fHour, tHour, fMinute, tMinute, fSecond, tSecond;

	scanf(" Dia %d", &fDay);
	scanf(" %d : %d : %d", &fHour, &fMinute, &fSecond);

	scanf(" Dia %d", &tDay);
	scanf(" %d : %d : %d", &tHour, &tMinute, &tSecond);

	int time = (tDay - fDay) * 24 * 3600;
	time = time + (tHour - fHour) * 3600;
	time = time + (tMinute - fMinute) * 60;
	time = time + (tSecond - fSecond);

	int days, hours, minutes, seconds;
	days = time / (24 * 3600);
	time = time % (24 * 3600);
	hours = time / 3600;
	time = time % 3600;
	minutes = time / 60;
	time = time % 60;
	seconds = time;

	printf("%d dia(s)\n", days);
	printf("%d hora(s)\n", hours);
	printf("%d minuto(s)\n", minutes);
	printf("%d segundo(s)\n", seconds);

	return 0;
}
