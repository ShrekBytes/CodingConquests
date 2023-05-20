#include <iostream>
#include <iomanip>

int main()
{
	float a, b;
	double c, d;

	std::cin >> a >> b;
	std::cin >> c >> d;

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "A = " << a << ", B = " << b << std::endl;
	std::cout << "C = " << c << ", D = " << d << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "A = " << a << ", B = " << b << std::endl;
	std::cout << "C = " << c << ", D = " << d << std::endl;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "A = " << a << ", B = " << b << std::endl;
	std::cout << "C = " << c << ", D = " << d << std::endl;

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "A = " << a << ", B = " << b << std::endl;
	std::cout << "C = " << c << ", D = " << d << std::endl;

	std::cout << std::scientific << std::setprecision(3) << std::uppercase;
	std::cout << "A = " << a << ", B = " << b << std::endl;
	std::cout << "C = " << c << ", D = " << d << std::endl;

	std::cout << std::fixed << std::setprecision(0);
	std::cout << "A = " << a << ", B = " << b << std::endl;
	std::cout << "C = " << c << ", D = " << d << std::endl;

	// Reseting float to default properties
	std::cout << std::defaultfloat << std::setprecision(6);

	return 0;
}
