using System;

class Program
{
	static void Main(string[] args)
	{
		String[] input;
		int a, b, c, d, e;

		input = Console.ReadLine().Split(' ');
		a = int.Parse(input[0]);
		b = int.Parse(input[1]);
		c = int.Parse(input[2]);
		d = int.Parse(input[3]);
		e = int.Parse(input[4]);

		if (a > b && b > c && c > d && d > e)
			Console.WriteLine("D");
		else if (a < b && b < c && c < d && d < e)
			Console.WriteLine("C");
		else
			Console.WriteLine("N");
	}
}