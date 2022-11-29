import java.util.*;
public class ex08{
	public static int fibonacci(int n)
	{
		if(n==0 || n==1)
		{
			return 1;
		}
		return fibonacci(n-1) + fibonacci(n-2);
	}
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of terms: ");
		int n = input.nextInt();
		for(int i = 0 ; i < n ; i++)
			System.out.print(fibonacci(i) + " ");
		System.out.println();
		
	}
	
}