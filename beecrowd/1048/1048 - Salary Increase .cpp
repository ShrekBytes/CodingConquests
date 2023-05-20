#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float oSalary, nSalary, mEarned;
	int rate;

	cin >> oSalary;

	if (oSalary >= 0 && oSalary <= 400)
		rate = 15;
	else if (oSalary >= 400.01 && oSalary <= 800)
		rate = 12;
	else if (oSalary >= 800.01 && oSalary <= 1200)
		rate = 10;
	else if (oSalary >= 1200.01 && oSalary <= 2000)
		rate = 7;
	else if (oSalary > 2000)
		rate = 4;
	else
        rate = 0;

	nSalary = oSalary + ((oSalary * rate) / 100);
	mEarned = nSalary - oSalary;

	cout << fixed << setprecision(2);
	cout << "Novo salario: " << nSalary << endl;
	cout << "Reajuste ganho: " << mEarned << endl;
	cout << "Em percentual: " << rate << " %" << endl;

	return 0;
}