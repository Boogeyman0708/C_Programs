import java.io.*;

class add {
    public static void main(String[] args) throws IOException {
        int a, b, c;
        String s1, s2;
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        System.out.println("Enter the first value to add: ");
        s1 = BR.readLine();
        a = Integer.parseInt(s1);
        System.out.println("Enter the second value to add: ");
        s2 = BR.readLine();
        b = Integer.parseInt(s2);
        c = a + b;
        System.out.println("The result of is: " + c);
    }
}