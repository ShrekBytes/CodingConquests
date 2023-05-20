#include <iostream>
#include <iomanip>

int main()
{
	float A, B, average;
	
	std::cin >> A;
	std::cin >> B;
	
	average = ((A * 3.5) + (B * 7.5)) / 11;

	std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << average << std::endl;

	return 0;
}