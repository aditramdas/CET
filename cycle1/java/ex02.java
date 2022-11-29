import java.util.*;

public class ex02{
	public static void main(String[] args){
		int i,n;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the string: ");
		String s = input.nextLine();
		
		char[] str = s.toCharArray();
		n = s.length();
		for(i = 0 ; i < n ; i++)
		{
			if(str[i] != str[n - 1 - i])
			{
				System.out.print("The string is not a palindrome.\n");
				break;
			}
		}
		if(i >= n)
			System.out.print("The string is palindrome.\n");
	}
}