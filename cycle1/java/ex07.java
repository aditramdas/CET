import java.util.*;

public class ex07{
	public static void main(String[] args)
	{
		int i , j , p , q ;
		int[][] A  = new int[50][50];
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the dimensions of the matrix: ");
		p = input.nextInt();
		q = input.nextInt();
		System.out.print("Enter the elements of matrix : \n");
		for(i = 0 ; i < p ; i++)
			for(j = 0 ; j < q ; j++)
				A[i][j] = input.nextInt();
		System.out.println("Transpose of the matrix: ");
		for(i = 0 ; i < q ; i++){
			for(j = 0 ; j < p ; j++)
				System.out.print( A[j][i] + "\t");
			System.out.print("\n");
		}
	}
}