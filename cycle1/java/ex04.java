import java.util.*;
public class ex04 {
	public static void main(String[] args) {
		int i,n;
		char[] str , revStr = new char[40];
		System.out.print("Enter the string: ");
		Scanner input = new Scanner(System.in);
		String s = input.nextLine();
		n = s.length();
		str = s.toCharArray();
		for( i = 0; i < n ; i++ )
			revStr[i] = str[n-i-1];
		String revS = new String(revStr);
		System.out.println("Reversed String : " + revS);
	}
}