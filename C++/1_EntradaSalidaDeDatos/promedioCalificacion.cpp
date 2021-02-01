/* Programa que saca el promedio de 3 calificaciones */
#include <iostream>

int main() {
  // variables de tipo real
  float calificacion1, calificacion2, calificacion3, promedio;

  std::cout << "Calificacion 1: ";
  std::cin >> calificacion1;

  std::cout << "Calificacion 2: ";
  std::cin >> calificacion2;
  
  std::cout << "Calificacion 3: ";
  std::cin >> calificacion3;
  
  promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

  std::cout << "El promedio es '" << promedio << "'" << std::endl;

  return 0;
}
