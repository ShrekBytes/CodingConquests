import java.util.Scanner;


public class Main
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		char a, b, c;
		
		while (scanner.hasNext())
		{
			a = scanner.next().charAt(0);
			b = scanner.next().charAt(0);
			c = scanner.next().charAt(0);
			
			System.out.printf("A = %c, B = %c, C = %c\n", a, b, c);
			System.out.printf("A = %c, B = %c, C = %c\n", b, c, a);
			System.out.printf("A = %c, B = %c, C = %c\n", c, a, b);
		}

		scanner.close();
	}
}