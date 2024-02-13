import java.io.*;

class fibonacci {
    public static void main(String[] args) throws IOException {
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(IN);
        int a, b, sum, n, i;
        String s1;
        a = 0;
        b = 1;
        System.out.print("Enter the terms in the Fibonacci Series: ");
        s1 = br.readLine();
        n = Integer.parseInt(s1);
        System.out.print("\nYour Fibonacci Series Printed below:\n");
        for (i = 0; i < n; i++) {
            System.out.print(+a + "\t");
            sum = a + b;
            a = b;
            b = sum;

        }
    }

}