import java.io.*;

public class swap {

    public static void main(String args[]) throws IOException {
        int a, b, c;
        String s1, s2;
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        System.out.print("Enter the first value: ");
        s1 = BR.readLine();
        a = Integer.parseInt(s1);
        System.out.print("Enter the second value: ");
        s2 = BR.readLine();
        b = Integer.parseInt(s2);
        System.out.println("Before swapping the first value was: " + a + " and second value was " + b + "");
        c = a;
        a = b;
        b = c;
        System.out.println("Before swapping the first value was: " + a + " and second value was " + b + "");
    }
}