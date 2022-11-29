import java.util.*;

public class ex13{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of rows: ");
		int n = input.nextInt();
		System.out.println();
		for(int i = 1 ; i <= n ; i++)
			System.out.println("* ".repeat(i));
	}
}