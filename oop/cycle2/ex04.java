import java.util.*;

public class ex04{
	public static void main(String args[])
	{
		Rectangle rect = new Rectangle();
		Triangle tri = new Triangle();
		Hexagon hex = new Hexagon();
		rect.numberOfSides();
		tri.numberOfSides();
		hex.numberOfSides();
	}
}
abstract class Shape{
	void numberOfSides(){

	}
}
class Rectangle extends Shape{
	void numberOfSides(){
		System.out.println("Number of sides of Rectangle: 4");
	}
}
class Triangle extends Shape{
	void numberOfSides(){
		System.out.println("Number of sides of Triangle: 3");
	}
}
class Hexagon extends Shape{
	void numberOfSides(){
		System.out.println("Number of sides of Hexagon: 6");
	}
}