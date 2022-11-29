import java.util.*;
import java.lang.Math;

public class ex12{
	public static boolean isArmstrong(int n){
		int temp = n,  count = 0 , powersum = 0 ;

		while(temp != 0){
			temp /= 10;
			count++;
		}
		temp = n;
		while(temp!=0){
			powersum += Math.pow(temp%10 , count);
			temp /=10;
		}
		if(powersum == n)
			return true;
		return false;

	}
	public static void main(String args[]){
		int i;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the starting number: ");
		int n1 = input.nextInt();
		System.out.print("Enter the ending number: ");
		int n2 = input.nextInt();
		System.out.println("\n\nArmstrong numbers: ");
		for(i = n1+1 ; i<n2 ; i++)
			if(isArmstrong(i))
				System.out.println(i);
	}
}