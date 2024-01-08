#include <iostream>

namespace uno //los namespace son como carpetas que contienen variables, funciones, clases, etc.
{
   int x; //variable global dentro del namespace uno (se puede acceder desde cualquier parte del programa)
   namespace dos  //namespace dentro de otro namespace
   {
      int x;  //variable global dentro del namespace dos
      namespace tres //namespace dentro de otro namespace
      {
         int x;  //variable global dentro del namespace tres
      }
   }
}

using std::cout;  //se puede usar using para no tener que escribir std::cout cada vez que se quiera usar cout (cout es una funcion de la libreria estandar de c++ que sirve para imprimir en pantalla)
using std::endl;  //endl es un caracter de escape que sirve para hacer un salto de linea
using uno::x;  //se puede usar using para no tener que escribir uno::x cada vez que se quiera usar x (x es una variable global del namespace uno)
int main()
{
   x = 10;  //se puede acceder a la variable global x del namespace uno desde cualquier parte del programa
   uno::dos::x = 30; //se puede acceder a la variable global x del namespace dos del namespace uno desde cualquier parte del programa
   cout << x << ", " << uno::dos::x << ", " << uno::dos::tres::x << endl;  //se imprime en pantalla el valor de las variables globales x de los namespaces uno, dos y tres respectivamente (se usa el caracter de escape endl para hacer un salto de linea) y se usa el caracter de escape << para concatenar los valores de las variables globales x de los namespaces uno, dos y tres respectivamente con el texto que se quiere imprimir en pantalla
   return 0;
}