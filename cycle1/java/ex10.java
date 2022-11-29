import java.util.*;

public class ex10{
	public static boolean inn(int n ,int arr[] ,int j){
		for(int i = 0 ; i< j + 1 ; i++){
			if(arr[i] == n){
				return true;
			}
		}
		return false;
	}
	public static int larg(int A[] , int B[] , int n1 ,int n2){
		int largest = 0;
		for(int i = 0 ; i < n1 ; i++)
			if(!inn(A[i] , B , n2)){
				largest = A[i];
				break;
			}
		for(int i = 0 ; i < n1 ; i++)
			if(!inn(A[i] , B , n2) && A[i] > largest)
				largest = A[i];
		return largest;
	}
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of elements in the first array: ");
		int n1 = input.nextInt();
		int A[] = new int[50];
		System.out.print("\nEnter the number of elements in the first array: ");
		int n2 = input.nextInt();
		int B[] = new int[50];
		System.out.println("Enter the elements of the first array: \n");
		for(int i = 0 ; i < n1 ; i++)
			A[i] = input.nextInt();
		System.out.println("Enter the elements of the Second array: \n");
		for(int i = 0 ; i < n2 ; i++)
			B[i] = input.nextInt();
		System.out.println("Largest Element in first array not present in second array: " + larg(A , B , n1 , n2));
	}
}