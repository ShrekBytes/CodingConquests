#include <stdio.h>

int main()
{
	int A, B, C, D;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	int diff = (A * B) - (C * D);
	
	printf("DIFERENCA = %d\n", diff);
	
	return 0;
}