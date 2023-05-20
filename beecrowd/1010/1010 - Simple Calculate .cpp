#include <iostream>
#include <iomanip>

int main()
{
	int code, unit;
	float price, toBePaid;

	std::cin >> code >> unit >> price;
	toBePaid = price * unit;
	std::cin >> code >> unit >> price;
	toBePaid += (unit * price);

	std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << toBePaid << std::endl; 

	return 0;
}