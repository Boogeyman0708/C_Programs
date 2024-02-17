
class Squ {
    double side;

    public double getVolume(double side) {
        this.side = side;
        double vol = side * side * side;
        System.out.println(vol);

    }
}

class Cyl extends Squ {
    super(side);
    double height;

    public double getVolume(double height) {
        this.height=height;
        double volume= 3.14*side*side*height;
        System.out.println("cyl: "+volume);

    }

}

public class Inh {
    public static void main(String[] args) {
        Cyl vol = new Cyl();

        vol.getVolume(5.2);
    }

}
