/* Programa que muestra la suma de dos numeros enteros */
#include <iostream>

int main() {
  // Variable: es un espacio reservado en memoria de la computadora
  // varianles de tipo entero
  int numero1, numero2, suma;

  std::cout << "Ingrese un numero entero: ";
  std::cin >> numero1; // lee un dato ingresado por teclado y lo guarda en 'numero1'

  std::cout << "Ingrese otro numero entero: ";
  std::cin >> numero2;

  // realiza la operacion de sumar los numeros y guarda el 
  // resultado en la variable 'suma'
  suma = numero1 + numero2;

  std::cout << "La suma de (" << numero1 << " + " << numero2 << ") es '" 
    << suma << "'" << std::endl;
  
  return 0;
}
