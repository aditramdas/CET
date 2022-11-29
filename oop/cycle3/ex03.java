import java.util.*;
import java.io.*;

public class ex03{
	public static void main(String args[]) throws Exception
	{
		FileReader fr = new FileReader("text.txt");
		int i;
		int wordcount = 1;
		int linecount = 1;
		int charcount = 1;
		while((i = fr.read()) != -1){
			if((char)i == '\n'){
				linecount++;
				wordcount++;
				continue;
			}
			if((char)i == ' '){
				wordcount++;
				continue;
			}
			charcount++;
		}
		System.out.println("Word Count: " + wordcount);
		System.out.println("Line Count: " + linecount);
		fr.close();
	}
}