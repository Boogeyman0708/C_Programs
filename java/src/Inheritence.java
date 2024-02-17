
class Square {
    double side;

    public double getVolume(double side) {
        this.side = side;
        double vol = side * side * side;
        return (vol);
    }
}

class Cylinder extends Square {
    double height;

    public double getVolumee() {
        double volume = 3.14 * height * side;
        return (volume);
    }
}

public class Inheritence {
    public static void main(String[] args) {
        Square sq = new Square();
        // sq.side = 5.0;
        double res = sq.getVolume(5.0);
        System.out.println("Result: " + res);
    }

}
