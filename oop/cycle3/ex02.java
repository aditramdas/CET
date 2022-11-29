import java.util.*;
import java.io.*;

public class ex02{
	public static void main(String args[]) throws Exception
	{
		FileReader fr = new FileReader("text.txt");
		int i;
		int count = 2;
		System.out.print("1: ");
		while((i = fr.read()) != -1){
			if((char)i == '\n'){
				System.out.print("\n"+count+": ");
				count++;
				continue;
			}

			System.out.print((char)i);
		}
		System.out.println();
		fr.close();
	}
}