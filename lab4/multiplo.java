
import java.util.Scanner;

public class multiplo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Ingrese un número: ");
        int numero = input.nextInt();
        if (numero % 3 == 0 && numero % 5 != 0) {
            System.out.println(numero + " es múltiplo de 3 pero no de 5");
        } else {
            System.out.println(numero + " no cumple con la condición");
        }
        input.close();
    }
}
