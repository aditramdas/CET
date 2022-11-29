import java.util.*;
import java.io.*;

public class ex01{
	public static void main(String args[]) throws Exception
	{
		String str = "Hello this is CET";
		FileWriter fw = new FileWriter("text1.txt");
		for(int i = 0 ; i < str.length() ; i++)
			fw.write(str.charAt(i));
		fw.close();
		FileReader fr = new FileReader("text1.txt");
		int i;
		while((i = fr.read()) != -1)
			System.out.print((char)i);
		System.out.println();
		fr.close();
	}
}
