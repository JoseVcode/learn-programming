/* Programa que indica si un numero es Par o Impar */
#include <iostream>

int main() {
  short numero;

  std::cout << "Numero: ";
  std::cin >> numero;

  // % - modulo
  if (numero % 2 == 0) {  // si el residuo de la division del numero entre dos es cero
    std::cout << "El numero es PAR!!" << std::endl;
  } else {
    std::cout << "El numero es IMPAR!!" << std::endl;
  }

  return 0;
}
