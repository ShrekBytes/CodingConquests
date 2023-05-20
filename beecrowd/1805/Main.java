import java.util.Scanner;

public class Main
{
	public static long Sum(long n)
	{
		long sum = (n * (n + 1)) / 2;
		return sum;
	}

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String[] input;
		long from, to, rSum;

		input = sc.nextLine().split(" ");
		from = Long.parseLong(input[0]);
		to = Long.parseLong(input[1]);

		rSum = Sum(to) - Sum(from - 1);
		System.out.println(rSum);

		sc.close();
	}
}