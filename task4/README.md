# Tarea1: Programa para realizar operaciones matemáticas básicas

Este es un programa en C++ que permite realizar operaciones matemáticas básicas, tales como suma, resta, multiplicación y división, a partir de dos números ingresados por el usuario. El programa solicita al usuario que ingrese dos números enteros, y luego realiza las cuatro operaciones mencionadas. Los resultados se muestran en pantalla.

## Requisitos

- C++ compiler
- Sistema operativo Windows, macOS o Linux

## Instrucciones de uso

1. Descargue o clone el repositorio en su equipo.
2. Abra una terminal y navegue hasta el directorio en el que se encuentra el archivo `tarea1.cpp`.
3. Compile el archivo ejecutando el siguiente comando: `g++ tarea1.cpp -o tarea1`
4. Ejecute el programa escribiendo el siguiente comando en la terminal: `./tarea1`
5. Siga las instrucciones del programa para ingresar dos números enteros y ver los resultados de las operaciones matemáticas.

## Ejemplo de uso

$ g++ tarea1.cpp -o tarea1
$ ./tarea1
Introduzca dos Numeros: 10 5
La Suma es: 15La resta es: 5la multiplicacion es: 50la divicion es: 2

## Autor

Este programa fue desarrollado por [Tu nombre aquí] como tarea para [Nombre del curso], en [Nombre de la institución].

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a, b, suma, resta, multiplicacion, divicion;
    cout << "Introduzca dos Numeros: ";
    cin >> a >> b;
    suma = a+b;
    resta = a-b;
    multiplicacion = a*b;
    divicion = a/b;
    cout<< "La Suma es: "<<suma;
    cout<< "La resta es: "<<resta;
    multiplicacion<< "la multiplicacion es: "<<multiplicacion;
    cout<< "la divicion es: "<<divicion;
    return 0;
}

