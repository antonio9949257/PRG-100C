import java.util.Scanner;

public class romanos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese un número decimal entre 1 y 3999: ");
        int decimal = scanner.nextInt();

        String[] unidades = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        String[] decenas = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        String[] centenas = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        String[] miles = {"","M","MM","MMM"};

        String romano = "";

        // Miles
        romano += miles[decimal / 1000];
        decimal %= 1000;

        // Centenas
        romano += centenas[decimal / 100];
        decimal %= 100;

        // Decenas
        romano += decenas[decimal / 10];
        decimal %= 10;

        // Unidades
        romano += unidades[decimal];

        System.out.println("El número romano equivalente es: " + romano);
    }
}
