#include <iostream>

int main()
{
	std::string junk;
	int fDay, tDay, fHour, tHour, fMinute, tMinute, fSecond, tSecond;

	std::cin >> junk >> fDay;
	std::cin >> fHour >> junk >> fMinute >> junk >> fSecond;

	std::cin >> junk >> tDay;
	std::cin >> tHour >> junk >> tMinute >> junk >> tSecond;

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

	std::cout << days << " dia(s)" << std::endl;
	std::cout << hours << " hora(s)" << std::endl;
	std::cout << minutes << " minuto(s)" << std::endl;
	std::cout << seconds << " segundo(s)" << std::endl;

	return 0;
}
