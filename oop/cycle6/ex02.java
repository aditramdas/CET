import java.util.*;

public class ex02{
	public static void main(String args[])
	{
		int A[] = new int[50];
		int top , bot, mid;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of elements: ");
		int n = input.nextInt();
		System.out.println("\nEnter the elements: ");
		for(int i = 0 ; i < n ; i++)
		{
			A[i] = input.nextInt();
		}
		System.out.print("Enter the number to be searched: ");
		int sear = input.nextInt();
		top = n ; 
		bot = 0;
		
		while(top >= bot){
			mid = (top+bot)/2;
			if(A[mid] == sear){
				System.out.println("Number Found at position " + (mid+1));
				break;
			}
			if(A[mid] > sear){
				top = mid-1;
				continue;
			}
			else if(A[mid] < sear)
			{
				bot = mid+1;
			}
		}
		if(top < bot)
			System.out.println("Number not found!");
		

	}
}