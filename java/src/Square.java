import java.io.*;

class Side {
    double x;

    public void calc(double y) {
        double cal;

        cal = this.x * y;
        System.out.println("Area of the Square is: " + cal);
    }
}

public class Square {
    public static void main(String args[]) throws IOException {
        Side len = new Side();
        len.x = 5.0;
        len.calc(6.0);
        Side len2 = new Side();
        len2.x = 15.0;
        len2.calc(5.0);
    }
}