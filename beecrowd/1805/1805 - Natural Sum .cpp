#include <iostream>

unsigned long long Sum(unsigned long long n)
{
	unsigned long long sum = (n * (n + 1)) / 2;

	return sum;
}

int main()
{
	unsigned long long from, to, rSum;
	std::cin >> from >> to;

	rSum = Sum(to) - Sum(from - 1);
	std::cout << rSum << std::endl;

	return 0;
}