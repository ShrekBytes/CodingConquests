#include <stdio.h>

int main()
{
	int code, unit;
	float price, toBePaid;

	scanf("%d %d %f", &code, &unit, &price);
	toBePaid = price * unit;
	scanf("%d %d %f", &code, &unit, &price);
	toBePaid += (unit * price);

	printf("VALOR A PAGAR: R$ %.2f\n", toBePaid);

	return 0;
}