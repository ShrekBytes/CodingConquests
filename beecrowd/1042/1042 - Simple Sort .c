#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int max = a, min = a, mid;

	if (b > max)
		max = b;
	if (c > max)
		max = c;

	if (b < min)
		min = b;
	if (c < min)
		min = c;

	mid = a + b + c - max - min;

	printf("%d\n%d\n%d\n", min, mid, max);
	printf("\n");
	printf("%d\n%d\n%d\n", a, b, c);

	return 0;
}