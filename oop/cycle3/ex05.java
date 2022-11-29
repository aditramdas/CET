import java.util.*;

public class ex05{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the numbers: ");
		String tbs = input.nextLine();
		StringTokenizer numbers = new StringTokenizer(tbs , " ");
		int sum = 0;
		while(numbers.hasMoreTokens()){
			int n = Integer.parseInt(numbers.nextToken());
			sum += n;
			System.out.println(n);
		}
		System.out.println("Sum: " + sum);
	}
}