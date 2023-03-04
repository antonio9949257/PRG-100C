import java.util.Scanner;

public class mayorABC {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int a, b, c;
    System.out.print("Ingrese el primer número: ");
    a = input.nextInt();
    System.out.print("Ingrese el segundo número: ");
    b = input.nextInt();
    System.out.print("Ingrese el tercer número: ");
    c = input.nextInt();
  
    if (a == b && b == c ){
        System.out.println("Los tres numero ingresados son iguales: "+a+" "+b+" "+c);
    }else if(a==b||a==b||a==b){
        System.out.println("Hay dos numero igules: ");
        if (a == b){
            System.out.println(a+" y "+b);
        } else if (a == c){
            System.out.println(a + " y " + b);
        } else {
            System.out.println(b + " y " + c);
        }
    }else{
        int mayor = a;
        if ( b > mayor){
            mayor = b;
        }
        if (c > mayor){
            mayor = c;
        }
        System.out.println("El numero mayor es: "+ mayor);
    }
    input.close();}
}