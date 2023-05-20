import java.util.Scanner;

public class Main
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        String input;
        String[] date;
        int dd, mm, yy;

        while (sc.hasNextLine()) 
        {
            input = sc.nextLine();
            date = input.split("/");
            dd = Integer.parseInt(date[0]);
            mm = Integer.parseInt(date[1]);
            yy = Integer.parseInt(date[2]);

            System.out.printf("%02d/%02d/%02d\n", mm, dd, yy);
            System.out.printf("%02d/%02d/%02d\n", yy, mm, dd);
            System.out.printf("%02d-%02d-%02d\n", dd, mm, yy);
        }

        sc.close();
    }
}
