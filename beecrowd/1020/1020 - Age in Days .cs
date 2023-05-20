using System;

class Program
{
	static void Main(string[] args)
	{
		int years, months, days;
		
		days = int.Parse(Console.ReadLine());
		
		years = days / 365;
		days = days % 365;
		months = days / 30;
		days = days % 30;
			
		Console.WriteLine(years + " ano(s)");
		Console.WriteLine(months + " mes(es)");
		Console.WriteLine(days + " dia(s)");
	}
}