import java.time.LocalDateTime;
import java.time.Duration;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] input;

		int fDay, tDay, fHour, tHour, fMinute, tMinute, fSecond, tSecond;

		input = sc.nextLine().split(" ");
		fDay = Integer.parseInt(input[1].trim());
		input = sc.nextLine().split(":");
		fHour = Integer.parseInt(input[0].trim());
		fMinute = Integer.parseInt(input[1].trim());
		fSecond = Integer.parseInt(input[2].trim());

		input = sc.nextLine().split(" ");
		tDay = Integer.parseInt(input[1].trim());
		input = sc.nextLine().split(":");
		tHour = Integer.parseInt(input[0].trim());
		tMinute = Integer.parseInt(input[1].trim());
		tSecond = Integer.parseInt(input[2].trim());

		LocalDateTime startTime = LocalDateTime.of(1, 1, fDay, fHour, fMinute, fSecond);
		LocalDateTime endTime = LocalDateTime.of(1, 1, tDay, tHour, tMinute, tSecond);
		Duration time = Duration.between(startTime, endTime);

		System.out.println(time.toDays() + " dia(s)");
		System.out.println(time.toHours() % 24 + " hora(s)");
		System.out.println(time.toMinutes() % 60 + " minuto(s)");
		System.out.println(time.getSeconds() % 60 + " segundo(s)");

		sc.close();
	}
}
