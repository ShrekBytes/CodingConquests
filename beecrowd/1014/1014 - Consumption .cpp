#include <iostream>
#include <iomanip>

int main()
{
	int X;
	float Y;

	std::cin >> X;
	std::cin >> Y;

	std::cout << std::fixed << std::setprecision(3) << (X / Y) << " km/l" << std::endl;

	return 0;
}