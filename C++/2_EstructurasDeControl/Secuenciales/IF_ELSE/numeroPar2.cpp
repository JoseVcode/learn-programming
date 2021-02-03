/* Programa que indica si un numero es Par o Impar */
#include <iostream>

int main() {
  short numero;

  std::cout << "Numero: ";
  std::cin >> numero;
  
  if (numero/2 * 2 == numero) { 
    std::cout << "El numero es PAR!!" << std::endl;
  } else {
    std::cout << "El numero es IMPAR!!" << std::endl;
  }

  return 0;
}
