import java.util.*;
public class ex11{
	public static void main(String args[]){
		int i , j , k  , p , sum=0;
		int[][] A = new int[50][50];
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the dimensions of Matrix : ");
		p = input.nextInt();
		
		System.out.println("Enter the elements of matrix : \n");
		for(i = 0 ; i < p ; i++)
			for(j = 0 ; j < p ; j++)
				A[i][j] = input.nextInt();
		for(i = 0 ; i < p ; i++ )
			sum += A[i][i];
		System.out.println("Sum of Diagonal elements : " + sum);
	}
}