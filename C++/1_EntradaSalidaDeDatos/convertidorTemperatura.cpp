/* Programa que convierte de grados Centigrados a Fahrenheit */
// F = C * 1.8 + 32
#include <iostream>

int main() {
  float centigrados, fahrenheit;

  std::cout << "Centigrados: ";
  std::cin >> centigrados;

  fahrenheit = centigrados * 1.8 + 32;

  std::cout << "Fahrenheit: " << fahrenheit << "°F" << std::endl;

  return 0;
}
