/* Programa que calcula el area de un triangulo, A = BxH/2 */
#include <iostream>

int main() {
  float base, altura, area;

  std::cout << "Base: ";
  std::cin >> base;

  std::cout << "Altura: ";
  std::cin >> altura;

  area = base * altura / 2;

  std::cout << "El area del triangulo es '" << area << "'" << std::endl;

  return 0;
}
