#include <iostream>

using namespace std;

int main()
{
    int A,B,C,V,S,T;
    cout << "Introduzca Productos A: ";
    cin >> A;
    cout << "Introduzca Productos B: ";
    cin >> B;
    cout << "Introduzca Productos C: ";
    cin >> C;
    V = (A+B+C)/10;
    cout << "Introduzca Sueldo base: ";
    cin >> S;
    T = S + V;
    cout<< "El total de su sueldo es: "<<T;
    return 0;
}
