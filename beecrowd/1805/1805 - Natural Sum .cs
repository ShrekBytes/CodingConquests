using System;

class Program
{
	static ulong Sum(ulong n)
	{
		ulong sum = (n * (n + 1)) / 2;
		return sum;	
	}
	
	static void Main(string[] args)
	{
		string[] input;
		ulong from, to, rSum;
		
		input = Console.ReadLine().Split(' ');
		from = ulong.Parse(input[0]);
		to = ulong.Parse(input[1]);
		
		rSum = Sum(to) - Sum(from - 1);
		Console.WriteLine(rSum);
	}
}