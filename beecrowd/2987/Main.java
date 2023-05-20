import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        
        char L;
        L = sc.next().charAt(0);
        int value = L - 'A' + 1;
        
        System.out.println(value);
        
        sc.close();
    }
}
