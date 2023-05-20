#include <stdio.h>

int main()
{
	int numEmployee, hWorked;
	float hSalary;

	scanf("%d", &numEmployee);
	scanf("%d", &hWorked);
	scanf("%f", &hSalary);

	float tSalary = hWorked * hSalary;

	printf("NUMBER = %d\n", numEmployee);
	printf("SALARY = U$ %.2f\n", tSalary);

	return 0;
}