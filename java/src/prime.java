import java.util.*;

class prime {
    public static void main(String[] args) {
        Scanner SC = new Scanner(System.in);
        System.out.print("Enter the number to check: ");
        int n, i, flag = 0;
        n = SC.nextInt();
        SC.close();
        if (n == 0 || n == 1) {
            flag = 1;
        } else {
            for (i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0) {
            System.out.println("The given number(" + n + ") is a Prime number.");
        } else {
            System.out.println("The given number(" + n + ") is a Non-Prime number.");
        }

    }
}