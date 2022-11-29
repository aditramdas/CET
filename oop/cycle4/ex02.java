import java.util.*;
import java.lang.Exception;

class AgeException extends Exception{
	public AgeException(String s){
		super(s);
	}
}
class ex02{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int age = input.nextInt()	;
		try{
			if(age < 18)
				throw new AgeException("No");
			System.out.println("Person can have driving license");
		}
		catch(AgeException e){
			System.out.println("Person is prohibited from having driving license");
		}
	}
}