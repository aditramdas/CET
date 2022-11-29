import java.util.*;

interface operations{
	void add(int a , int b);
	void diff(int a , int b);
	void quoti(int a , int b);
}
interface result extends operations{
	void result(float a , String s);
}

class calculator implements result{
	public void add(int a , int b){
		result(a+b , "Addition");
	}
	public void diff(int a , int b){
		result(a-b , "Subtraction");
	}
	public void quoti(int a , int b){
		result((float)a/b , "Division");
	}
	public void result(float a , String s){
		System.out.println(s + " Result: " + a);
	}
}
public class ex05{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the numbers: ");
		int a  = input.nextInt();
		int b = input.nextInt();
		calculator c = new calculator();
		c.add(a , b);
		c.diff(a , b);
		c.quoti(a , b);
	}
}