import java.util.*;

public class ex06{
	public static void main(String args[]){
		A classA = new A();
		classA = null;
		System.gc();
		
	}
}
class A{
	int i;
	protected int b;
	static int c;
	public void finalize(){
		System.out.println("Object is garbage collected");
	}
}

