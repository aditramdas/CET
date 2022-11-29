import java.util.*;

public class ex09{
	public static boolean inn(int n ,int arr[] ,int j){
		for(int i = 0 ; i< j + 1 ; i++){
			if(arr[i] == n){
				return true;
			}
		}
		return false;
	}
	public static void removeDuplicates(int A[] , int n)
	{
		int count = 0 , j=0;
		int rem[] = new int[50];
		
		for(int i = 0 ; i< n ; i++)
		{
			if(!inn(A[i] , rem , j+1 )){
				rem[j] = A[i];
				j++;
			}
			else
				count++;
		}
		System.out.println("Count: " + count);
		System.out.print("Removed List: ");
		for(int i = 0 ; i < j ; i++)
			System.out.print(rem[i] + " ");
		System.out.println();
	}
	public static void main(String [] args){
		int A[] = new int[50];
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of elements in the array: ");
		int n = input.nextInt();
		System.out.println("Enter the elements of the array: \n");
		for(int i = 0 ; i < n ; i++)
			A[i] = input.nextInt();
		
		removeDuplicates(A , n);
	}
}