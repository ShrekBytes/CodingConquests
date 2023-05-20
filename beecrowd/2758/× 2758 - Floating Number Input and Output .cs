using System;


class Program
{
    static void Main(string[] args)
    {
        float a, b;
        double c, d;
        
        string[] values = Console.ReadLine().Split(" ");
        a = float.Parse(values[0]);
        b = float.Parse(values[1]);
        
        values = Console.ReadLine().Split(" ");
        c = double.Parse(values[0]);
        d = double.Parse(values[1]);
       
        
        Console.WriteLine($"A = {a:F6}, B = {b:F6}");
        Console.WriteLine($"C = {c:F6}, D = {d:F6}");
        
        Console.WriteLine($"A = {a:F1}, B = {b:F1}");
        Console.WriteLine($"C = {c:F1}, D = {d:F1}");
        
        Console.WriteLine($"A = {a:F2}, B = {b:F2}");
        Console.WriteLine($"C = {c:F2}, D = {d:F2}");
        
        Console.WriteLine($"A = {a:F3}, B = {b:F3}");
        Console.WriteLine($"C = {c:F3}, D = {d:F3}");
        
        Console.WriteLine($"A = {a:0.000E+00}, B = {b:0.000E+00}");
        Console.WriteLine($"C = {c:0.000E+00}, D = {d:0.000E+00}");
        
        Console.WriteLine($"A = {a:F0}, B = {b:F0}");
        Console.WriteLine($"C = {c:F0}, D = {d:F0}");
    }
}