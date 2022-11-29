import java.util.*;
import java.lang.Math;

public class ex01{
	public static double area(int a){
		return 3.1415*a*a;
	}
	public static int area(int a, int b){
		return a*b;
	}
	public static double area(int a , int b , int c){
		int s = (a+b+c)/2;
		double are = Math.sqrt(s*(s-a)*(s-b)*(s-c));
		return are;
	}
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the shape(Triangle(1)/Rectangle(2)/Circle(3): ");
		int n = input.nextInt();
		if(n==1)
		{
			System.out.print("\nEnter the dimensions: ");
			int a = input.nextInt();
			int b = input.nextInt();
			int c = input.nextInt();
			System.out.println(area(a , b , c));
		}
		if(n==2)
		{
			System.out.print("\nEnter the dimensions: ");
			int a = input.nextInt();
			int b = input.nextInt();
			System.out.println(area(a , b ));
		}
		if(n==3)
		{
			System.out.print("\nEnter the radius: ");
			int a = input.nextInt();
			System.out.print(area(a ));
		}


	}
}