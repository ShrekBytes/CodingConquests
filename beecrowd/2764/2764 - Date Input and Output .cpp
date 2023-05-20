#include <iostream>
#include <iomanip>

using std::setw;

int main()
{
	char slash1, slash2;
	int dd, mm, yy;

	while (std::cin >> dd >> slash1 >> mm >> slash2 >> yy)
	{
		std::cout << std::setfill('0');
		std::cout << setw(2) << mm << "/" << setw(2) << dd << "/" << setw(2) << yy << std::endl;
		std::cout << setw(2) << yy << "/" << setw(2) << mm << "/" << setw(2) << dd << std::endl;
		std::cout << setw(2) << dd << "-" << setw(2) << mm << "-" << setw(2) << yy << std::endl;
	}

	return 0;
}
