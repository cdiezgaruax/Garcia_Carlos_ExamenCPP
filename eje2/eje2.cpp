
/**Ejercicio 2: Día de la Semana
    Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).
**/
#include "eje2.h"
#include <iostream>
using namespace std;

void eje2(){
    int dia;
cout << "Ingrese un numero del 1 al 7: "<<endl;
cin >> dia;
switch (dia) {        //switch para que coja el numero que recage del usario y imprime el dia de la semana
case 1:
    cout << "Lunes" << endl;
    break;
case 2:
    cout << "Martes" << endl;
    break;
case 3:
    cout << "Miercoles" << endl;
    break;
case 4:
    cout << "Jueves" << endl;
    break;
case 5:
    cout << "Viernes" << endl;
    break;
case 6:
    cout << "Sabado" << endl;
    break;
case 7:
    cout << "Domingo" << endl;
    break;
    }