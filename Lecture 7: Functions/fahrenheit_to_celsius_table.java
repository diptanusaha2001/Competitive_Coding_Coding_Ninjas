import java.util.Scanner;
public class Solution {

	public static void printFahrenheitTable(int start, int end, int step) {

	for(int i=start;i<end;i+=step)
    {
        System.out.println(start+"\t"+(5*(start-32)/9));
        start=start+step;
    }
    }

    



}
