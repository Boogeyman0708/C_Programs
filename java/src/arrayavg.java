import java.util.*;

class arrayavg {
    public static void main(String[] args) {
        Scanner SC = new Scanner(System.in);
        System.out.print("enter n terms");
        int n = SC.nextInt();
        int a[] = new int[n];
        System.out.println("enter the values one by one");
        for (int i = 0; i < n; i++) {
            a[i] = SC.nextInt();
        }
        double s = 0;
        for (int i = 0; i < n; i++) {
            s = s + a[i];
        }
        SC.close();
        double avg = 0.0;
        avg = s / n;
        System.out.println("The average of the array is: " + avg);
    }

}

class array {
}