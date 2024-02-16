import java.io.*;
import java.util.*;

class str {
    public static void main(String args[]) throws IOException {
        // InputStreamReader IN = new InputStreamReader(System.in);
        // BufferedReader BR = new BufferedReader(IN);

        String str = "My";
        String str1, str2, str3, str4;
        str1 = " name";
        str2 = " is";
        str3 = "Rahit";
        str4 = str + str1 + str2 + " " + str3;
        // charAt
        char ch = str4.charAt(12);
        System.out.println(str4);
        System.out.println(ch);
        // getChars
        char ch1[] = new char[6];
        str4.getChars(10, 16, ch1, 0);
        System.out.println(ch1);
        for (char n : ch1) {
            System.out.print(n + "\t");
        }
        // equals
        String str5 = "rahit";
        if (str3.equals(str5)) {
            System.out.println("\nboth are same");
        } else {
            System.out.println("\nnot equal");
        }
        if (str5.equalsIgnoreCase(str3)) {
            System.out.println("both are same(eIC)");
        } else {
            System.out.println("not equal(eIC)");
        }
        // starts with
        boolean bool = str3.startsWith("Ra");
        System.out.println(bool);
        // compareto
        int i = str1.compareToIgnoreCase(str5);
        System.out.println(i);
        // index of
        int j = str4.lastIndexOf(" ");
        System.out.println(j);
        int space = 0, letter = 0;
        char[] chr = str4.toCharArray();
        for (int z = 0; z < str4.length(); z++) {
            if (Character.isSpaceChar(chr[z])) {
                space++;
            } else if (Character.isLetter(chr[z])) {
                letter++;
            }

        }
        System.out.println(space);
        System.out.println(letter);
        StringBuffer stb = new StringBuffer();
        stb.append("Aadrik");
        System.out.println(stb);
        stb.reverse();
        System.out.println(stb);
        StringBuffer stb1 = new StringBuffer();
        stb1.append(str);
        stb1.append(str1);
        stb1.append(str2);
        stb1.append(" ");
        stb1.append(str3);
        System.out.println(stb1);
        // stb1.reverse();
        // System.out.println(stb1);
        stb1.insert(2, "iss");
        System.out.println(stb1);
        StringBuffer stb2 = new StringBuffer();
        stb2 = stb1;
        System.out.println(stb2);
        stb2.replace(14, 19, "Aadrik");
        System.out.println(stb2);
    }
}
