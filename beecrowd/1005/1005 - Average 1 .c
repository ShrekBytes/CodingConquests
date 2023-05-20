#include <stdio.h>

int main()
{
	float A, B, average;
	
	scanf("%f", &A);
	scanf("%f", &B);
	
	average = ((A * 3.5) + (B * 7.5)) / 11;
	
	printf("MEDIA = %.5f\n", average);

	return 0;
}