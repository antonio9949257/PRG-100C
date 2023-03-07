#include <iostream>

using namespace std;

int main() {
  float calificacion_1, calificacion_2, calificacion_3, examen_final, trabajo, promedio;

  
  cout << "Ingresa la primera calificación: ";
  cin >> calificacion_1;
  cout << "Ingresa la segunda calificación: ";
  cin >> calificacion_2;
  cout << "Ingresa la tercera calificación: ";
  cin >> calificacion_3;
  cout << "Ingresa la calificación del examen final: ";
  cin >> examen_final;
  cout << "Ingresa la calificación del trabajo: ";
  cin >> trabajo;

  
  promedio = (calificacion_1 + calificacion_2 + calificacion_3) / 3;

  
  float calificacion_final = (promedio * 0.55) + (examen_final * 0.3) + (trabajo * 0.15);

  
  cout << "Tu calificación final en la materia de programación es: " << calificacion_final << endl;

  return 0;
}
