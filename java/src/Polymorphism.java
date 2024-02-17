import java.io.*;

class Outerclass {
    public void Poly(int a) {
        System.out.println("The user given object is an integer value: " + a);
    }

    public void Poly(float a) {
        System.out.println("The user given object is an float value: " + a);
    }

    public void Poly(String a) {
        System.out.println("The user given object is an String value: " + a);
    }

    public void Poly(double a) {
        System.out.println("The user given object is an double value: " + a);
    }
}

public class Polymorphism {
    public static void main(String[] args) throws IOException {
        Outerclass oc = new Outerclass();
        oc.Poly(15);
        oc.Poly(5.2f);
        oc.Poly(2.06d);
        oc.Poly("Hello World.!!");
        
    }
}
