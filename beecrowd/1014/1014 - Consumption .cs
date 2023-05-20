using System;

class Program
{
	static void Main(string[] args)
	{
		int X;
		float Y;
		
		X = int.Parse(Console.ReadLine());
		Y = float.Parse(Console.ReadLine());
		
		Console.WriteLine($"{(X/Y):F3} km/l");
	}
}