using System;

class Program
{
	static void Main(string[] args)
	{
		int nEmployee, hWorked;
		float hSalary;
		
		nEmployee = int.Parse(Console.ReadLine());
		hWorked = int.Parse(Console.ReadLine());
		hSalary = float.Parse(Console.ReadLine());
		
		float tSalary = hWorked * hSalary;
		
		Console.WriteLine("NUMBER = " + nEmployee);
		Console.WriteLine($"SALARY = U$ {tSalary:F2}");
	}
}