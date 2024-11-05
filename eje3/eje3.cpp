/**Ejercicio 3: Cálculo de Promedio de Calificaciones
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones.
    **/
#include "eje3.h"
#include <iostream>

using namespace std;

void eje3(){
double nota1; //variables para las notas
double nota2;
double nota3;
double nota4;
double nota5;
double nota6;
double nota7;
double nota8;
cout << "Ingrese la nota del ejercicio 1: "<<endl;
cin >> nota1;
cout << "Ingrese la nota del ejercicio 2: "<<endl;
cin >> nota2;
cout << "Ingrese la nota del ejercicio 3: "<<endl;
cin >> nota3;
cout << "Ingrese la nota del ejercicio 4: "<<endl;
cin >> nota4;
cout << "Ingrese la nota del ejercicio 5: "<<endl;
cin >> nota5;
cout << "Ingrese la nota del ejercicio 6: "<<endl;
cin >> nota6;
cout << "Ingrese la nota del ejercicio 7: "<<endl;
cin >> nota7;
cout << "Ingrese la nota del ejercicio 8: "<<endl;
cin >> nota8;

double media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8) / 8; // definimos la variable media y calculamos el promedio de las notas
cout << "El promedio de las calificaciones es: " << media << endl;
}