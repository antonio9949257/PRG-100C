#include <iostream>

using namespace std;

int main()
{
    int total, cuenta, interes;
    cout << "Introduzca Cuenta: ";
    cin >> cuenta;
    cout << "Introduzca Porcentaje de interés: ";
    cin >> interes;
    total = cuenta - ((cuenta * interes)/100);
    cout<< "El total con descuento es: "<<total;
    return 0;
}
