using System;

class Program
{
	static void Main(string[] args)
	{
		String[] input;
		int code, unit;
		float price, toBePaid;
		
		input = Console.ReadLine().Split(' ');
		code = int.Parse(input[0]);
		unit = int.Parse(input[1]);
		price = float.Parse(input[2]);
		
		toBePaid = price * unit;
		
		input = Console.ReadLine().Split(' ');
		code = int.Parse(input[0]);
		unit = int.Parse(input[1]);
		price = float.Parse(input[2]);
		
		toBePaid += (price * unit);
		
		Console.WriteLine($"VALOR A PAGAR: R$ {toBePaid:F2}");
	}
}