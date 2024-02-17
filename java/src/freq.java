import java.io.*;

public class freq {
    public static void main(String[] args) throws IOException {
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        System.out.println("Enter the sentence: ");
        String s = BR.readLine();
        s.toLowerCase();
        System.out.println("Character \t Frequency");
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int n = 0;
            for (int i = 0; i < s.length(); i++) {
                if (ch == s.charAt(i)) {
                    n++;
                }
            }
            if (n != 0) {
                System.out.println(ch + "\t\t" + n);
            }
        }
    }
}
