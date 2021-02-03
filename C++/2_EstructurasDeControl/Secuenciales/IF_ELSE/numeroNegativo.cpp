/* Programa que indica si un numero es positivo o negativo */
#include <iostream>

int main() {
  short numero;

  std::cout << "Numero: ";
  std::cin >> numero;

  if (numero > 0) { // si 'numero' es maypr a 0, entra al bloque if
    std::cout << "El numero es 'Positivo'" << std::endl;
  } // fin bloque if
  else { // de lo contrario, si 'numero' es menor a 0, entra al bloque else
    std::cout << "El numero es 'Negativo'" << std::endl;
  } // fin bloque else

  return 0;
}
