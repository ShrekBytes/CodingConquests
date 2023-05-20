using System;

class Program
{
    static void Main(string[] args)
    {
        char a, b, c;

        while (char.TryParse(Console.ReadLine(), out a) &&
               char.TryParse(Console.ReadLine(), out b) &&
               char.TryParse(Console.ReadLine(), out c))
        {
                Console.WriteLine($"A = {a}, B = {b}, C = {c}");
                Console.WriteLine($"A = {b}, B = {c}, C = {a}");
                Console.WriteLine($"A = {c}, B = {a}, C = {b}");
        }
    }
}