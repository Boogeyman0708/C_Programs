import java.util.*;

public class average {
    public static void main(String[] args)

    {

        Scanner sc = new Scanner(System.in);
        System.out.println("enter n terms");
        int n = sc.nextInt();
        int a[] = new int[n];
        System.out.println("enter array elements ");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int s = 0;
        for (int i = 0; i < n; i++) {
            s = s + a[i];
        }
        double avg = 0.0;
        avg = s / n;
        System.out.println("avg=" + avg);
        sc.close();
    }

}