#include <stdio.h>

int main()
{
	int dd, mm, yy;

	while (scanf("%d/%d/%d", &dd, &mm, &yy) == 3)
	{
		printf("%02d/%02d/%02d\n", mm, dd, yy);
		printf("%02d/%02d/%02d\n", yy, mm, dd);
		printf("%02d-%02d-%02d\n", dd, mm, yy);
	}

	return 0;
}