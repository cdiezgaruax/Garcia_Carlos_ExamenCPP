/** Ejercicio 4: Promoción de "3 por 2" en Tienda
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.
**/
#include "eje4.h"
#include <iostream>
using namespace std;

void eje4(){
double precio1;
double precio2;
double precio3;
cout << "Ingrese el precio del primer artículo: "<<endl;
cin >> precio1;
cout << "Ingrese el precio del segundo artículo: "<<endl;
cin >> precio2;
cout << "Ingrese el precio del tercer artículo: "<<endl;
cin >> precio3;

double total;
if (precio1 <= precio2 && precio1 <= precio3) { //primero vemos si el precio 1 es menor que los otros dos
    total = precio2 + precio3;  //si es asi sumamos los otros dos precios
} else if (precio2 <= precio1 && precio2 <= precio3) { //si no vemos si el precio 2 es menor que los otros dos
    total = precio1 + precio3; //si es asi sumamos los otros dos precios
} else {
    total = precio1 + precio2; //si no es ninguno de los anteriores sumamos los otros dos precios
}

cout << "El total a pagar bajo la promoción '3 por 2' es: " << total << endl;
}