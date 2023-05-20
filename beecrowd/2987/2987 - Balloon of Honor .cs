using System;

class Program
{
	static void Main(string[] args)
	{
		char L;
		L = Console.ReadLine()[0];
		int value = L - 'A' + 1;

		Console.WriteLine(value);
	}
}