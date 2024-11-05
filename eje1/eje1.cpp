
/** Ejercicio 1: Identificación de Número Positivo, Negativo o Cero
    Escribe un programa en C
    ++que
    solicite al usuario ingresar un número entero
    .
    El programa deberá analizar el número ingresado e imprimir en pantalla si el número es
    "positivo", "negativo"
    o
    "cero".
**/
#include "eje1.h"
#include <iostream>
using namespace std; // para no tener que escribir std::cout, std::cin, std::endl.
void eje1(){ //pra llamar mas tarde al ejercicio 1
    double numero;
cout << "Ingrese un numero: "<<endl;
cin >> numero;
if (numero > 0){ //compureba que el numero sea positivo porque siginidica que es mayo que 0
    cout << "El numero es positivo." << endl;
} else if (numero < 0){ //comprueba que el numero sea negativo porque significa que es menor que 0
    cout << "El numero es negativo." << endl;
} else {
    cout << "El numero es cero." << endl; //si no es ni positivo ni negativo es cero
}
}