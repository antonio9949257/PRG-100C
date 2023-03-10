#include <iostream>

using namespace std;

int main()
{
    int s, x, f,d,e;
    cout << "Introduzca su numero de horas: ";
    cin >> x;
    s = x * 16;
    if (x <= 40)
    {
        cout << "el salario es : "<<s;
        }
    else
    {
        if (x > 40)
        {
            f = 40 - x;
            d = f*20;
            e = d+s;
            cout << "el salario : "<<e;
            cout << "";
           
        }
    }

    return 0;
}
