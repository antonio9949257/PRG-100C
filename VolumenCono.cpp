#include <iostream>

using namespace std;

int main()
{
    double PI=3.14, H, R, V;
    cout <<"Introducir Haltura: ";
    cin >> H;
    cout <<"Introducir Radio: ";
    cin >> R;
    V = (PI * R * R * H)/3;
    cout <<"El volumen es: "<< V;
    return 0;
}
