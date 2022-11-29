import java.util.*;

public class ex07{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the length and breadth of the rectangle: ");
		int l = input.nextInt();
		int b = input.nextInt();
		System.out.println("Enter the length of the Square: ");
		int x = input.nextInt();
		Rectangle a = new Rectangle(l , b);
		Square z = new Square(x );
		a.area();
		a.perimeter();
		z.area();
		z.perimeter();

	}
}
class Rectangle{
	int length , breadth;
	Rectangle(int l , int b){
		length = l;
		breadth = b;
	}
	void area(){
		System.out.println("Area of Rectangle: "+length*breadth);
	}
	void perimeter(){
		System.out.println("Perimeter of Rectangle: "+ 2*(length+breadth));
	}
}
class Square extends Rectangle{
	Square(int l ){
		super(l , l);
	}
}