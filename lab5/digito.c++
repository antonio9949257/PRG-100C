#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Ingresa un número entero: ";
    cin >> num;

    int ultimoDigito = num % 10;

    if (ultimoDigito == 0) {
        cout << "El último dígito es neutro." << endl;
    } else if (ultimoDigito % 2 == 0) {
        cout << "El último dígito es par." << endl;
    } else {
        cout << "El último dígito es impar." << endl;
    }

    return 0;
}
