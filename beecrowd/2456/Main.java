import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] input;
		int a, b, c, d, e;

		input = sc.nextLine().split(" ");
		a = Integer.parseInt(input[0]);
		b = Integer.parseInt(input[1]);
		c = Integer.parseInt(input[2]);
		d = Integer.parseInt(input[3]);
		e = Integer.parseInt(input[4]);

		if (a > b && b > c && c > d && d > e)
			System.out.println("D");
		else if (a < b && b < c && c < d && d < e)
			System.out.println("C");
		else
			System.out.println("N");

		sc.close();
	}
}