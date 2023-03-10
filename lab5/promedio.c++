#include <iostream>

using namespace std;

int main()
{
    int x, y, z,p;
    cout << "Introduzca su primera nota: ";
    cin >> x;
    cout << "Introduzca su segunda nota: ";
    cin >> y;
    cout << "Introduzca su tercera nota: ";
    cin >> z;
    p = (x + y + z)/3;
    cout<< "Su promedio es: "<< p;
    return 0;
}
