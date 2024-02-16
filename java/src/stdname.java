import java.io.*;
import java.util.*;

public class stdname {
    public static void main(String args[]) throws IOException {
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        int n;
        System.out.print("Enter the number of student names.");
        String s1 = BR.readLine();
        n = Integer.parseInt(s1);
        if (n > 10) {
            System.out.print("Number of names should be less than or equal 10.");

        }
        System.out.println("Enter student names on eby one: ");
        String[] names = new String[n];
        for (int i = 0; i < n; i++) {
            names[i] = BR.readLine();
        }
        Arrays.sort(names);
        System.out.print("\n\nThe output List of student: \n\n");
        for (int i = 0; i < n; i++) {
            System.out.println(names[i]);
        }
    }

}
