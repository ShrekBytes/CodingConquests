import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String[] input;
		double x1, y1, x2, y2;

		input = sc.nextLine().split(" ");
		x1 = Double.parseDouble(input[0]);
		y1 = Double.parseDouble(input[1]);

		input = sc.nextLine().split(" ");
		x2 = Double.parseDouble(input[0]);
		y2 = Double.parseDouble(input[1]);

		double distance = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2));
		System.out.printf("%.4f\n", distance);

		sc.close();
	}
}