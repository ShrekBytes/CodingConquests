#include <stdio.h>

unsigned long long Sum(unsigned long long n)
{
	unsigned long long sum = (n * (n + 1)) / 2;

	return sum;
}

int main()
{
	unsigned long long from, to, rSum;
	scanf("%llu %llu", &from, &to);

	rSum = Sum(to) - Sum(from - 1);
	printf("%llu\n", rSum);

	return 0;
}
