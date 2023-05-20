using System;

class Program
{
	static void Main(string[] args)
	{
		string[] input;

		int fDay, tDay, fHour, tHour, fMinute, tMinute, fSecond, tSecond;

		input = Console.ReadLine().Split(' ');
		fDay = int.Parse(input[1]);
		input = Console.ReadLine().Split(':');
		fHour = int.Parse(input[0]);
		fMinute = int.Parse(input[1]);
		fSecond = int.Parse(input[2]);

		input = Console.ReadLine().Split(' ');
		tDay = int.Parse(input[1]);
		input = Console.ReadLine().Split(':');
		tHour = int.Parse(input[0]);
		tMinute = int.Parse(input[1]);
		tSecond = int.Parse(input[2]);

		DateTime startTime = new DateTime(1, 1, fDay, fHour, fMinute, fSecond);
		DateTime endTime = new DateTime(1, 1, tDay, tHour, tMinute, tSecond);
		TimeSpan time = endTime - startTime;

		Console.WriteLine(time.Days + " dia(s)");
		Console.WriteLine(time.Hours + " hora(s)");
		Console.WriteLine(time.Minutes + " minuto(s)");
		Console.WriteLine(time.Seconds + " segundo(s)");
	}
}