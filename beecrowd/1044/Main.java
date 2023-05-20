import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String[] input;
		int A, B;

		input = sc.nextLine().split(" ");
		A = Integer.parseInt(input[0]);
		B = Integer.parseInt(input[1]);

		if (A % B == 0 || B % A == 0)
			System.out.println("Sao Multiplos");
		else
			System.out.println("Nao sao Multiplos");

		sc.close();
	}
}