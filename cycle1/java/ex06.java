import java.util.*;

public class ex06{
	public static void main(String[] args){
		int i , j , k  , p , q, m, n; 
		int[][] A = new int[50][50];
		int[][] B= new int[50][50];
		int[][] C= new int[50][50];
		// Arrays.fill(C , 0);
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the dimensions of Matrix 1: ");
		p = input.nextInt();
		q = input.nextInt();
		System.out.print("Enter the dimensions of Matrix 2: ");
		m = input.nextInt();
		n = input.nextInt();
		System.out.print("Enter the elements of matrix 1: \n");
		for(i = 0 ; i < p ; i++)
			for(j = 0 ; j < q ; j++)
				A[i][j] = input.nextInt();
		System.out.print("Enter the elements of matrix 2: \n");
		for(i = 0 ; i < m ; i++)
			for(j = 0 ; j < n ; j++)
				B[i][j] = input.nextInt();
		for(i = 0 ; i < p ; i++)
			for(j = 0 ; j < n ; j++)
				for(k = 0 ; k < m ; k++)
					C[i][j] += A[i][k]*B[k][j];
		System.out.println("Multiplied Matrix: ");
		for(i = 0 ; i < p ; i++){
			for(j = 0 ; j < n ; j++)
				System.out.print( C[i][j] + "\t");
			System.out.print("\n");
		}
	}
}