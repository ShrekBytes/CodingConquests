#include <iostream>

int main()
{
	double N;
	std::cin >> N;
	int I = N * 100;

	int n100, n50, n20, n10, n5, n2;
	int c100, c50, c25, c10, c5, c1;

	n100 = I / 10000;
	I = I % 10000;
	n50 = I / 5000;
	I = I % 5000;
	n20 = I / 2000;
	I = I % 2000;
	n10 = I / 1000;
	I = I % 1000;
	n5 = I / 500;
	I = I % 500;
	n2 = I / 200;
	I = I % 200;

	c100 = I / 100;
	I = I % 100;
	c50 = I / 50;
	I = I % 50;
	c25 = I / 25;
	I = I % 25;
	c10 = I / 10;
	I = I % 10;
	c5 = I / 5;
	I = I % 5;
	c1 = I / 1;
	I = I % 1;

	std::cout << "NOTAS:" << std::endl;
	std::cout << n100 << " nota(s) de R$ 100.00" << std::endl;
	std::cout << n50 << " nota(s) de R$ 50.00" << std::endl;
	std::cout << n20 << " nota(s) de R$ 20.00" << std::endl;
	std::cout << n10 << " nota(s) de R$ 10.00" << std::endl;
	std::cout << n5 << " nota(s) de R$ 5.00" << std::endl;
	std::cout << n2 << " nota(s) de R$ 2.00" << std::endl;

	std::cout << "MOEDAS:" << std::endl;
	std::cout << c100 << " moeda(s) de R$ 1.00" << std::endl;
	std::cout << c50 << " moeda(s) de R$ 0.50" << std::endl;
	std::cout << c25 << " moeda(s) de R$ 0.25" << std::endl;
	std::cout << c10 << " moeda(s) de R$ 0.10" << std::endl;
	std::cout << c5 << " moeda(s) de R$ 0.05" << std::endl;
	std::cout << c1 << " moeda(s) de R$ 0.01" << std::endl;

	return 0;
}