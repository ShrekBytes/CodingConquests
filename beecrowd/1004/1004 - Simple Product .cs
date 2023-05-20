using System;

class Program
{
	static void Main(string[] args)
	{
		int x, y;
		
		x = int.Parse(Console.ReadLine());
		y = int.Parse(Console.ReadLine());
		
		int PROD = x * y;
		
		Console.WriteLine("PROD = " + PROD);
	}
}