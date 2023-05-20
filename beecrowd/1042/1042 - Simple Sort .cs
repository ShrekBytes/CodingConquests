using System;

class Program
{
	static void Main(string[] args)
	{
		string[] input;
		int a, b, c;

		input = Console.ReadLine().Split(' ');
		a = int.Parse(input[0]);
		b = int.Parse(input[1]);
		c = int.Parse(input[2]);

		int[] nums = { a, b, c };
		Array.Sort(nums);

		Console.WriteLine($"{nums[0]}\n{nums[1]}\n{nums[2]}");
		Console.WriteLine();
		Console.WriteLine($"{a}\n{b}\n{c}");
	}
}