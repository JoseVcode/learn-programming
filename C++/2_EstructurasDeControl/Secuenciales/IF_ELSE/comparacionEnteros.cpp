/* Programa que hace una comparacion de dos numeros enteros */
#include <iostream>

// le digo al programa que voy a usar esas funciones
// que estan en el espacio de nombre 'std'
using std::cout;
using std::cin;
using std::endl;

int main() {
  int  numero1, numero2;

  cout << "Numero 1: ";
  cin >> numero1;

  cout << "Numero 2: ";
  cin >> numero2;

  if (numero1 == numero2)
    cout << "'" << numero1 << "' es igual a '" << numero2 << "'" << endl;

  if (numero1 != numero2)
    cout << "'" << numero1 << "' es diferente de '" << numero2 << "'" << endl;

  if (numero1 < numero2)
    cout << "'" << numero1 << "' es menor a '" << numero2 << "'" << endl;

  if (numero1 > numero2)
    cout << "'" << numero1 << "' es mayor a '" << numero2 << "'" << endl;

  if (numero1 <= numero2)
    cout << "'" << numero1 << "' es menor o igual a '" << numero2 << "'" << endl;

  if (numero1 >= numero2)
    cout << "'" << numero1 << "' es mayor o igual a '" << numero2 << "'" << endl;
  
  return 0;
}
