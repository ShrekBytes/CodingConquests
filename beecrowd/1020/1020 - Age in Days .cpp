#include <iostream>

int main()
{
	int years, months, days;

	std::cin >> days;

	years = days / 365;
	days = days % 365;
	months = days / 30;
	days = days % 30;

	std::cout << years << " ano(s)" << std::endl;
	std::cout << months << " mes(es)" << std::endl;
	std::cout << days << " dia(s)" << std::endl;

	return 0;
}