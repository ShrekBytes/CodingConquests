using System;


class Program
{
  static void Main(string[] args)
  {
    string input;
    string[] date;
    int dd, mm, yy;

    while ((input = Console.ReadLine()) != null)
    {
      date = input.Split('/');
      dd = int.Parse(date[0]);
      mm = int.Parse(date[1]);
      yy = int.Parse(date[2]);

      Console.WriteLine($"{mm:D2}/{dd:D2}/{yy:D2}");
      Console.WriteLine($"{yy:D2}/{mm:D2}/{dd:D2}");
      Console.WriteLine($"{dd:D2}-{mm:D2}-{yy:D2}");
    }
  }
}
