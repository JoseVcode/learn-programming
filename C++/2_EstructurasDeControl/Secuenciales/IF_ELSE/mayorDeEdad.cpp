/* Programa que muestra si una persona es mayor de edad */
#include <iostream>

int main() {
  short edad;

  std::cout << "Cual es su edad: ";
  std::cin >> edad;
  
  // IF - Si
  // si se cumple la condicion ejecuta el bloque de instrucciones 
  if (edad >= 18) {  // si 'edad' es igual o mayor a 18, entra al bloque
    std::cout << "Ya eres mayor de edad!!" << std::endl;
  } // fin del bloque IF

  return 0;
}
