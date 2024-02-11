import java.io.*;

class evenseries {
    public static void main(String[] args) throws IOException {
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        System.out.print("Enter the number of terms to sum: ");
        int n, i, a = 0, sum = 0;
        String s1;
        s1 = BR.readLine();
        n = Integer.parseInt(s1);
        for (i = 0; i < n; i++) {
            a = a + 2;
            sum += a;
        }
        System.err.println("The sum of the " + n + "th even number is: " + sum);
    }
}