import java.util.Scanner;

public class Main 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		double N;
		
		N = sc.nextDouble();
		int I = (int)(N * 100);

		int n100, n50, n20, n10, n5, n2;
		int c100, c50, c25, c10, c5, c1;

		n100 = I / 10000;
		I = I % 10000;
		n50 = I / 5000;
		I = I % 5000;
		n20 = I / 2000;
		I = I % 2000;
		n10 = I / 1000;
		I = I % 1000;
		n5 = I / 500;
		I = I % 500;
		n2 = I / 200;
		I = I % 200;

		c100 = I / 100;
		I = I % 100;
		c50 = I / 50;
		I = I % 50;
		c25 = I / 25;
		I = I % 25;
		c10 = I / 10;
		I = I % 10;
		c5 = I / 5;
		I = I % 5;
		c1 = I / 1;
		I = I % 1;

		System.out.println("NOTAS:");
		System.out.println(n100 + " nota(s) de R$ 100.00");
		System.out.println(n50 + " nota(s) de R$ 50.00");
		System.out.println(n20 + " nota(s) de R$ 20.00");
		System.out.println(n10 + " nota(s) de R$ 10.00");
		System.out.println(n5 + " nota(s) de R$ 5.00");
		System.out.println(n2 + " nota(s) de R$ 2.00");

		System.out.println("MOEDAS:");
		System.out.println(c100 + " moeda(s) de R$ 1.00");
		System.out.println(c50 + " moeda(s) de R$ 0.50");
		System.out.println(c25 + " moeda(s) de R$ 0.25");
		System.out.println(c10 + " moeda(s) de R$ 0.10");
		System.out.println(c5 + " moeda(s) de R$ 0.05");
		System.out.println(c1 + " moeda(s) de R$ 0.01");

		sc.close();
	}
}
