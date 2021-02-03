/* Programa que muestra si un numero tiene parte decimal */
#include <iostream>

int main() {
  double numeroDecimal;

  std::cout << "Numero: ";
  std::cin >> numeroDecimal;

  // hacemos un casteo para sacar la parte entera 
  // y depues restarla al numero ingresado
  numeroDecimal =  ((int) numeroDecimal) - numeroDecimal;

  // si es mayor a cero, quiere decir que tiene  parte fraccionaria
  if (numeroDecimal == 0) {
    std::cout << "Es un numero Entero" << std::endl;
  } else {
    std::cout << "Es un numero Decimal" << std::endl;
  }

  return 0;
}
