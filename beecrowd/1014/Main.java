import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		int X;
		float Y;
		
		X = sc.nextInt();
		Y = sc.nextFloat();
		
		System.out.printf("%.3f km/l\n", (X / Y));
		
		sc.close();
	}
}