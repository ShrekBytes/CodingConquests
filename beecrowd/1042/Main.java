import java.util.Arrays;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String[] input;
        int a, b, c;

        input = sc.nextLine().split(" ");
        a = Integer.parseInt(input[0]);
        b = Integer.parseInt(input[1]);
        c = Integer.parseInt(input[2]);

        int[] nums = { a, b, c };
        Arrays.sort(nums);

        System.out.println(nums[0] + "\n" + nums[1] + "\n" + nums[2]);
        System.out.println();
        System.out.println(a + "\n" + b + "\n" + c);

        sc.close();
    }
}
