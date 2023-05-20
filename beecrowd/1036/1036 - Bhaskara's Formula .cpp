#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	double A, B, C, R1, R2;

	std::cin >> A >> B >> C;

	R1 = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
	R2 = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);

	if (isnan(R1) || isnan(R2))
		std::cout << "Impossivel calcular" << std::endl;

	else
	{
		std::cout << std::fixed << std::setprecision(5);
		std::cout << "R1 = " << R1 << std::endl;
		std::cout << "R2 = " << R2 << std::endl;
	}

	return 0;
}