using System;

class Program
{
	static void Main(string[] args)
	{
		double A, B, average;
		
		A = double.Parse(Console.ReadLine());
		B = double.Parse(Console.ReadLine());
		
		average = ((A * 3.5) + (B * 7.5)) / 11;
		
		Console.WriteLine($"MEDIA = {average:F5}");
	}
}