 
import java.util.Scanner;

public class porciento {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    double p, c;
    System.out.print("Ingrese compra: ");
    c = input.nextInt();
    if ( c>1000 ){
        p=c-((c*20)/100);
        System.out.println("total a pagar con descuento es : "+p);
    }else {
        System.out.println("total a pagar : "+ c);
    }
    input.close();}
}