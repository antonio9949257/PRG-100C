import java.util.Scanner;

public class mayormenorAB{
    public static void main(String[] args){
        int a,b;
        Scanner leer_primero = new Scanner(System.in);
        System.out.print("Ingrese el primer numero: ");
        a = leer_primero.nextInt();
        Scanner leer_segunda = new Scanner(System.in);
        System.out.print("Ingrese el segundo numero: ");
        b = leer_segunda.nextInt();

        if (a > b){
            System.out.println(a+" es mayor que "+b);
        }else{
            System.out.println(b+" es mayor que "+a);
        leer_primero.close();
        leer_segunda.close();
        }
    }
}