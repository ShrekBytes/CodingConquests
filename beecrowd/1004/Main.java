import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		int x, y;

		x = sc.nextInt();
		y = sc.nextInt();

		int PROD = x * y;

		System.out.println("PROD = " + PROD);

		sc.close();
	}
}