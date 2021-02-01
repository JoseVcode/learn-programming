/* Programa que muestra la potencia cuadrada de un numero entero */
#include <iostream>

int main() {
  int numero;

  std::cout << "Ingrese un numero: ";
  std::cin >> numero;

  std::cout << "La potencia es '" << numero*numero << "'" << std::endl;

  return 0;
}
