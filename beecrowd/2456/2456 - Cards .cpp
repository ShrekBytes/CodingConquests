#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	if (a > b && b > c && c > d && d > e)
		std::cout << "D" << std::endl;

	else if (a < b && b < c && c < d && d < e)
		std::cout << "C" << std::endl;

	else
		std::cout << "N" << std::endl;

	return 0;
}