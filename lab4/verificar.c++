#include <iostream>
#include <string>

int main() {
    int numero;
    std::cout << "Ingrese un número de 3 dígitos: ";
    std::cin >> numero;
    std::string numero_str = std::to_string(numero);
    int primer_digito = std::stoi(numero_str.substr(0, 1));
    if (primer_digito % 2 == 0) {
        std::cout << "El primer dígito de " << numero << " es par\n";
    } else {
        std::cout << "El primer dígito de " << numero << " es impar\n";
    }
    return 0;
}
