import java.util.*;

public class ex05{
	public static void main(String[] args)
	{
		int small , secSmall , i , n, temp;
		System.out.print("Enter the number of terms: ");
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		System.out.print("Enter the numbers : \n");
		small = input.nextInt();
		temp = input.nextInt();
		if(temp < small)
		{
			secSmall = small;
			small = temp;
		}
		else secSmall = temp;
		for(i = 0 ; i< n-2 ; i++)
		{
			int temp1 = input.nextInt();
			if(temp1 < secSmall && temp1 > small)
				secSmall = temp1;
			else if(temp1 < small)
			{
				secSmall = small;
				small = temp1;
			}
			else if(temp1 > small && small==secSmall)
				secSmall = temp1;
		}
		System.out.println("\nSecond small term : "+ secSmall);
	}
}