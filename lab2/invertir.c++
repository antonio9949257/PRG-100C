#include <iostream>

using namespace std;

int main()
{
    int ganancia, capital, interes;
    cout << "Introduzca su capital: ";
    cin >> capital;
    cout << "Introduzca interes: ";
    cin >> interes;
    ganancia = capital + ((capital * interes)/100);
    cout<< "El total de la ganancia es: "<< ganancia;
    return 0;
}
