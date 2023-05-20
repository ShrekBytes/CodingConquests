import java.util.Scanner;


public class Main
{
  public static void main(String[] args)
  {
    float a, b;
    double c, d;
    
    Scanner scanner = new Scanner(System.in);
    
    String[] values = scanner.nextLine().split(" ");
    a = Float.parseFloat(values[0]);
    b = Float.parseFloat(values[1]);
    
    values = scanner.nextLine().split(" ");
    c = Double.parseDouble(values[0]);
    d = Double.parseDouble(values[1]);
    
    System.out.printf("A = %f, B = %f\n", a, b);
    System.out.printf("C = %f, D = %f\n", c, d);
    
    System.out.printf("A = %.1f, B = %.1f\n", a, b);
    System.out.printf("C = %.1f, D = %.1f\n", c, d);
    
    System.out.printf("A = %.2f, B = %.2f\n", a, b);
    System.out.printf("C = %.2f, D = %.2f\n", c, d);
    
    System.out.printf("A = %.3f, B = %.3f\n", a, b);
    System.out.printf("C = %.3f, D = %.3f\n", c, d);
    
    System.out.printf("A = %.3E, B = %.3E\n", a, b);
    System.out.printf("C = %.3E, D = %.3E\n", c, d);
    
    System.out.printf("A = %.0f, B = %.0f\n", a, b);
    System.out.printf("C = %.0f, D = %.0f\n", c, d);
    
    scanner.close();
    
  }
}