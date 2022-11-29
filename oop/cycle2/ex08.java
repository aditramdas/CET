import java.util.*;

public class ex08{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		System.out.print("Enter salary: ");
		int salary = input.nextInt();
		System.out.print("Enter hours: ");
		int hours = input.nextInt();
		Employee e1 = new Employee();
		e1.getInfo(salary ,hours);
		e1.AddSal();
		e1.AddWork();
		e1.finalSal();
	}
}

class Employee{
	int salary;
	int time;
	void getInfo(int salary , int time){
		this.salary = salary;
		this.time = time;
	}
	void AddSal(){
		if(salary < 500)
			salary += 10;
	}
	void AddWork(){
		if(time > 6)
			salary += 5;
	}
	void finalSal(){
		System.out.println("Final Salary: $" + salary);
	}
}