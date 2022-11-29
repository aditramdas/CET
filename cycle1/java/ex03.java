import java.util.*;

public class ex03{
	public static void main(String[] args)
	{
		int i,n, count=0;
		char a;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the string: ");
		String s  = input.nextLine();
		System.out.print("Enter the character to be searched: ");
		a = input.next().charAt(0);
		char[] str = s.toCharArray();
		n = s.length();
		for(i = 0 ; i< n ; i++)
			if(str[i] == a)
				count++;
		System.out.println("Count : " + count);
	}
}