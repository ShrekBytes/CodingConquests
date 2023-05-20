#include <iostream>

int main()
{
	int A, B, C, D;

	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
	std::cin >> D;

	int diff = (A * B) - (C * D);

	std::cout << "DIFERENCA = " << diff << std::endl;

	return 0;
}