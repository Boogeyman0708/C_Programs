import java.io.*;

public class point2D {
    double x1, y1, x2, y2;

    public point2D(double x1, double y1, double x2, double y2) {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }
}

class point3D extends point2D {
    double z1, z2;

    public point3D(double x1, double y1, double x2, double y2, double z1, double z2) {
        super(x1, y1, x2, y2);
        this.z1 = z1;
        this.z2 = z2;
    }

    public double distance() {
        double distance = Math
                .sqrt(Math.pow((super.x1 - super.x2), 2) + Math.pow((super.y1 - super.y2), 2) + Math.pow((z1 - z2), 2));
        return (distance);
    }
}

class pointdest {
    public static void main(String[] add) throws IOException {
        InputStreamReader IN = new InputStreamReader(System.in);
        BufferedReader BR = new BufferedReader(IN);
        System.out.print("Enter the values of x1,y1,z1: ");
        double x1, x2, y1, y2, z1, z2;
        String s1;
        s1 = BR.readLine();
        x1 = Double.parseDouble(s1);

        s1 = BR.readLine();
        y1 = Double.parseDouble(s1);

        s1 = BR.readLine();
        z1 = Double.parseDouble(s1);

        System.out.println("Enter the values of x1,y1,z1: ");
        s1 = BR.readLine();
        x2 = Double.parseDouble(s1);

        s1 = BR.readLine();
        y2 = Double.parseDouble(s1);

        s1 = BR.readLine();
        z2 = Double.parseDouble(s1);

        point3D pt = new point3D(x1, y1, x2, y2, z1, z2);
        double result = pt.distance();
        System.out.println("The distance between two point is: " + result);
    }
}