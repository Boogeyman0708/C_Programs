import java.io.*;

class prime1 {
    public static void main(String args[]) throws IOException {
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        int a, i, flag = 0;
        String s1;
        System.out.print("Enter the number to check: ");
        s1 = BR.readLine();
        a = Integer.parseInt(s1);
        if (a == 1 || a == 0) {
            flag = 1;
        } else {
            for (i = 2; i <= a / 2; i++) {
                if (a % i == 0) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1) {
            System.out.println("The given number " + a + " is a Non-Prime number.");
        } else {
            System.out.println("The given number " + a + " is a Prime number.");
        }

    }
}