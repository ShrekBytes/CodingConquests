import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int years, months, days;
			
		days = sc.nextInt();
		
		years = days / 365;
		days = days % 365;
		months = days / 30;
		days = days % 30;
		
		System.out.println(years + " ano(s)");
		System.out.println(months + " mes(es)");
		System.out.println(days + " dia(s)");

		sc.close();
	}
}