using System;

class Program
{
	static void Main(string[] args)
	{
		double oSalary, nSalary, mEarned;
		int rate;

		oSalary = double.Parse(Console.ReadLine());

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

		Console.WriteLine($"Novo salario: {nSalary:F2}");
		Console.WriteLine($"Reajuste ganho: {mEarned:F2}");
		Console.WriteLine("Em percentual: " + rate + " %");

	}
}