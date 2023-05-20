using System;

class Program
{
	static void Main(string[] args)
	{
		string[] input;
		double A, B, C, R1, R2;

		input = Console.ReadLine().Split(' ');
		A = double.Parse(input[0]);
		B = double.Parse(input[1]);
		C = double.Parse(input[2]);

		R1 = (-B + Math.Sqrt(B * B - 4 * A * C)) / (2 * A);
		R2 = (-B - Math.Sqrt(B * B - 4 * A * C)) / (2 * A);

		if (double.IsNaN(R1) || double.IsNaN(R2))
			Console.WriteLine("Impossivel calcular");

		else
		{
			Console.WriteLine($"R1 = {R1:F5}");
			Console.WriteLine($"R2 = {R2:F5}");
		}

	}
}