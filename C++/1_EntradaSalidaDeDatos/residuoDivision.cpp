/* Programa que muestra el cociente y residuo de una division entera */
#include <iostream>

int main() {
  int dividendo, divisor, cociente, residuo;    

  std::cout << "Ingrese el dividendo y el divisor \nseparados por un espacio: ";
  std::cin >> dividendo >> divisor;

  cociente = dividendo / divisor;
  residuo = dividendo % divisor;  // % - modulo

  std::cout << "Cociente: " << cociente << std::endl;
  std::cout << "Residuo: " << residuo << std::endl;

  return 0;
}
