/* Programa que muestra los digitos de un numero separados por un espacio */
#include <iostream>

int main() {
  int numero;
  short digito;

  std::cout << "Numero: ";
  std::cin >> numero;

  if (numero >= 100000000) {
    digito = numero / 100000000;
    numero = numero % 100000000;

    std::cout << digito << " ";

    if (numero < 10000000)
      std::cout << "0 ";
    if (numero < 1000000)
      std::cout << "0 ";
    if (numero < 100000)
      std::cout << "0 ";
    if (numero < 10000)
      std::cout << "0 ";
    if (numero < 1000)
      std::cout << "0 ";
    if (numero < 100)
      std::cout << "0 ";
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 10000000) {
    digito = numero / 10000000;
    numero = numero % 10000000;

    std::cout << digito << " ";
    
    if (numero < 1000000)
      std::cout << "0 ";
    if (numero < 100000)
      std::cout << "0 ";
    if (numero < 10000)
      std::cout << "0 ";
    if (numero < 1000)
      std::cout << "0 ";
    if (numero < 100)
      std::cout << "0 ";
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 1000000) {
    digito = numero / 1000000;
    numero = numero % 1000000;

    std::cout << digito << " ";
    
    if (numero < 100000)
      std::cout << "0 ";
    if (numero < 10000)
      std::cout << "0 ";
    if (numero < 1000)
      std::cout << "0 ";
    if (numero < 100)
      std::cout << "0 ";
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 100000) {
    digito = numero / 100000;
    numero = numero % 100000;

    std::cout << digito << " ";
    
    if (numero < 10000)
      std::cout << "0 ";
    if (numero < 1000)
      std::cout << "0 ";
    if (numero < 100)
      std::cout << "0 ";
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 10000) {
    digito = numero / 10000;
    numero = numero % 10000;

    std::cout << digito << " ";
    
    if (numero < 1000)
      std::cout << "0 ";
    if (numero < 100)
      std::cout << "0 ";
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 1000) {
    digito = numero / 1000;
    numero = numero % 1000;

    std::cout << digito << " ";
    
    if (numero < 100)
      std::cout << "0 ";
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 100) {
    digito = numero / 100;
    numero = numero % 100;

    std::cout << digito << " ";
    
    if (numero < 10)
      std::cout << "0 ";
  }

  if (numero >= 10) {
    digito = numero / 10;
    numero = numero % 10;

    std::cout << digito << " ";
  }

  std::cout << numero << std::endl;
  
  return 0;
}
