import java.util.*;

public class ex01{
	static void div(int a , int b) throws ArithmeticException{
		float c = (float)a/b;
		if(b==0){
			throw new ArithmeticException();
		}
		System.out.println("Division Result: " + c);
	}
	public static void main(String args[]){
		try{
			Scanner input = new Scanner(System.in);
			int a = input.nextInt();
			int b = input.nextInt();
			div(a , b);
		}
		catch(ArithmeticException e){
			System.out.println("Division by zero is prohibited!");
		}
		finally{
			System.out.println("Process Completed");
		}
	}
}