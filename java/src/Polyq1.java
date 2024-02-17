
class Outerclas {
    public void Area(double l, double b) {
        double x = l * b;
        System.out.println("The area of the given Rectangle is: " + x);
    }

    public void Area(double s) {
        double y = s * s;
        System.out.println("The area of the given Square is: " + y);
    }
}

public class Polyq1 {
    public static void main(String[] args) {
        Outerclas oc = new Outerclas();
        oc.Area(5.0, 7.0);
    }

}
