#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese un número de 3 dígitos: ";
    std::cin >> numero;

    int digito_1 = numero / 100;  // primer dígito
    int digito_2 = (numero % 100) / 10;  // segundo dígito
    int digito_3 = numero % 10;  // tercer dígito

    int mayor_digito;
    if (digito_1 >= digito_2 && digito_1 >= digito_3) {
        mayor_digito = digito_1;
    } else if (digito_2 >= digito_1 && digito_2 >= digito_3) {
        mayor_digito = digito_2;
    } else {
        mayor_digito = digito_3;
    }

    std::cout << "El mayor dígito de " << numero << " es " << mayor_digito << "\n";
    return 0;
}
