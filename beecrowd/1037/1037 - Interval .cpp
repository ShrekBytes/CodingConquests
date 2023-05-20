#include <iostream>

int main()
{
	float num;
	std::cin >> num;

	if (num >= 0 && num <= 25)
		std::cout << "Intervalo [0,25]" << std::endl;

	else if (num > 25 && num <= 50)
		std::cout << "Intervalo (25,50]" << std::endl;

	else if (num > 50 && num <= 75)
		std::cout << "Intervalo (50,75]" << std::endl;

	else if (num > 75 && num <= 100)
		std::cout << "Intervalo (75,100]" << std::endl;

	else
		std::cout << "Fora de intervalo" << std::endl;

	return 0;
}