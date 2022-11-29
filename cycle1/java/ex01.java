import java.util.*;

public class ex01{
	public static void main(String[] args){
		int i;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number: ");
		int n = input.nextInt();
		for( i = 2 ; i <= n/2 ; i++)
		{
			if(n%i == 0){
				System.out.print("The number is not prime.\n");
				break;
			}
		}
		if(i >= n/2)
			System.out.print("The number is prime.\n");
	}
}