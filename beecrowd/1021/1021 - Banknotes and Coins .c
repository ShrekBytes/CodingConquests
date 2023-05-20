#include <stdio.h>

int main()
{
	double N;
	scanf("%lf", &N);
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

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", c100);
	printf("%d moeda(s) de R$ 0.50\n", c50);
	printf("%d moeda(s) de R$ 0.25\n", c25);
	printf("%d moeda(s) de R$ 0.10\n", c10);
	printf("%d moeda(s) de R$ 0.05\n", c5);
	printf("%d moeda(s) de R$ 0.01\n", c1);

	return 0;
}