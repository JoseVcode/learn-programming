/* Programa que calcula si un alumno Aprobo o Reprobo una materia */
#include <iostream>

int main() {
  float tarea, examen1, examen2, promedio;

  std::cout << "Nota de la tarea: ";
  std::cin >> tarea;

  std::cout << "Nota del Examen 1: " ;
  std::cin >> examen1;

  std::cout << "Nota del Examen 2: ";
  std::cin >> examen2;

  promedio = (tarea + examen1 + examen2) / 3;

  std::cout << std::endl;
  if (promedio >= 70) {
    std::cout << "Alumno APROBADO :)" << std::endl;
  } else {
    std::cout << "Alumno REPROBADO :(" << std::endl;
  }

  return 0;
}
