#include <iostream>
#include <iomanip>

int main()
{
	int nEmployee, hWorked;
	float hSalary;

	std::cin >> nEmployee;
	std::cin >> hWorked;
	std::cin >> hSalary;

	float tSalary = hWorked * hSalary;

	std::cout << "NUMBER = " << nEmployee << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "SALARY = U$ " << tSalary << std::endl;

	return 0;
}