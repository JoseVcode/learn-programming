/* Programa que muestra si un numero tiene parte decimal */
#include <iostream>

int main() {
  int numeroEntero;
  double numeroDecimal;

  std::cout << "Numero: ";
  std::cin >> numeroDecimal;

  // casteo - transformar o convertir un tipo de dato a otro
  // hacemos un casteo para guardar la parte entera
  numeroEntero = (int) numeroDecimal;

  // comparamos si la parte entera es igual al numero ingresado
  if (numeroEntero == numeroDecimal) {
    std::cout << "Es un numero Entero" << std::endl;
  } else {
    std::cout << "Es un numero Decimal" << std::endl;
  }

  return 0;
}
