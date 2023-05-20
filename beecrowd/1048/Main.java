import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		double oSalary, nSalary, mEarned;
		int rate;

		oSalary = sc.nextDouble();

		if (oSalary >= 0 && oSalary <= 400)
			rate = 15;
		else if (oSalary >= 400.01 && oSalary <= 800)
			rate = 12;
		else if (oSalary >= 800.01 && oSalary <= 1200)
			rate = 10;
		else if (oSalary >= 1200.01 && oSalary <= 2000)
			rate = 7;
		else if (oSalary > 2000)
			rate = 4;
		else
			rate = 0;

		nSalary = oSalary + ((oSalary * rate) / 100);
		mEarned = nSalary - oSalary;

		System.out.printf("Novo salario: %.2f\n", nSalary);
		System.out.printf("Reajuste ganho: %.2f\n", mEarned);
		System.out.println("Em percentual: " + rate + " %");

		sc.close();
	}
}