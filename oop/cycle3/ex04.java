import java.util.*;
import java.io.*;

public class ex04{
	public static void main(String args[]) throws Exception
	{
		try{
			String str = "Hello this is CET";
			FileWriter fw = new FileWriter("text1.txt");
			for(int i = 0 ; i < str.length() ; i++)
				fw.write(str.charAt(i));
			System.out.println("File Written");
			fw.close();
		}
		catch(IOException e){
			System.out.println("File Not Found");
		}
		try{
			FileReader fr = new FileReader("te.txt");
			int i;
			while((i = fr.read()) != -1)
				System.out.print((char)i);
			System.out.println();
			fr.close();
		}
		catch(IOException e){
			System.out.println("File Not Found");
		}
	}
}
