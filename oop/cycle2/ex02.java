import java.util.*;


public class ex02{

	public static void main(String args[])
	{
		Officer f1 = new Officer();
		Scanner input = new Scanner(System.in);
		System.out.println("Officer Details: ");
		System.out.print("Name: ");
		f1.name = input.nextLine();
		System.out.print("\nAge: ");
		f1.age = input.nextInt();
		System.out.print("\nPhone: ");
		f1.phone = input.nextDouble();
		input.nextLine();
		System.out.print("\nAddress: ");
		f1.address = input.nextLine();
		System.out.print("\nSalary: ");
		f1.salary = input.nextInt();
		input.nextLine();
		System.out.print("\nSpecialization: ");
		f1.specialization = input.nextLine();


		System.out.println("\n\nOfficer Details: ");
		System.out.print("Name: " + f1.name);
		System.out.print("\nAge: " + f1.age);
		System.out.print("\nPhone: "+f1.phone);
		System.out.print("\nAddress: " + f1.address);
		System.out.print("\nSalary: " + f1.salary);
		System.out.print("\nSpecialization: " + f1.specialization);

		Manager m1 = new Manager();
		System.out.println("\n\nManager Details: ");
		System.out.print("Name: ");
		m1.name = input.nextLine();
		System.out.print("\nAge: ");
		m1.age = input.nextInt();
		System.out.print("\nPhone: ");
		m1.phone = input.nextDouble();
		input.nextLine();
		System.out.print("\nAddress: ");
		m1.address = input.nextLine();
		System.out.print("\nSalary: ");
		m1.salary = input.nextInt();
		input.nextLine();
		System.out.print("\nDepartment: ");
		m1.dept = input.nextLine();

		System.out.println("\n\nManager Details: ");
		System.out.print("Name: " + m1.name);
		System.out.print("\nAge: " + m1.age);
		System.out.print("\nPhone: "+m1.phone);
		System.out.println("\nAddress: " + m1.address);
		m1.printSalary();
		System.out.println("\nDepartment: " + m1.dept);
	}
}