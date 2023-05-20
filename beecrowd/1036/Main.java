import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String[] input;
		double A, B, C, R1, R2;

		input = sc.nextLine().split(" ");
		A = Double.parseDouble(input[0]);
		B = Double.parseDouble(input[1]);
		C = Double.parseDouble(input[2]);

		R1 = (-B + Math.sqrt(B * B - 4 * A * C)) / (2 * A);
		R2 = (-B - Math.sqrt(B * B - 4 * A * C)) / (2 * A);

		if (Double.isNaN(R1) || Double.isNaN(R2))
			System.out.println("Impossivel calcular");

		else {
			System.out.printf("R1 = %.5f\n", R1);
			System.out.printf("R2 = %.5f\n", R2);
		}

		sc.close();
	}
}