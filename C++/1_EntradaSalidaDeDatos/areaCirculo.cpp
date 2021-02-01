/* Programa que calcula el area y longuitud de un circulo */
// Area = PI*Radio^2, Longuitud = 2*PI*Radio 
#include <iostream>
#define PI 3.1416 // definimos una constante, dato que no cambia durante la ejecucion del programa

int main() {
  float radio, area, longuitud;    
  
  std::cout << "Radio: ";
  std::cin >> radio;

  longuitud = 2*PI*radio;
  area = PI*radio*radio;

  std::cout << "Longuitud: " << longuitud << std::endl;
  std::cout << "Area: " << area << std::endl;

  return 0;
}
