import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		double A, B, average;
		
		A = sc.nextDouble();
		B = sc.nextDouble();
		
		average = ((A * 3.5) + (B * 7.5)) / 11;
		
		System.out.printf("MEDIA = %.5f\n", average);
		
		sc.close();
	}
}