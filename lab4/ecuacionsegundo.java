
import java.util.Scanner;

public class ecuacionsegundo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a, b, c, u, xi, xj;
        System.out.print("Ingrese el valor de A: ");
        a = input.nextDouble();
        System.out.print("Ingrese el valor de B: ");
        b = input.nextDouble();
        System.out.print("Ingrese el valor de C: ");
        c = input.nextDouble();
        u = (b*b) - (4*a*c);
        if (u > 0) {
            xi = (-b + Math.sqrt(u)) / (2*a);
            xj = (-b - Math.sqrt(u)) / (2*a);
            System.out.println("Las raices son: " + xi + " " + xj);
        } else if (u == 0) {
            xi = -b / (2*a);
            System.out.println("Las raices son iguales: " + xi);
        } else {
            System.out.println("Las raices son imaginarias");
        }
        input.close();
    }
}
