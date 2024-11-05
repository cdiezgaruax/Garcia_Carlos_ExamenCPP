#include <iostream>
using namespace std;
int main() {
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
    double numero;
    cout << "Ingrese un numero: "<<endl;
    cin >> numero;
    if (numero > 0){
        cout << "El numero es positivo." << endl;
    } else if (numero < 0){
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }

    /**Ejercicio 2: Día de la Semana
    Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo).
**/
    int dia;
    cout << "Ingrese un numero del 1 al 7: "<<endl;
    cin >> dia;
    switch (dia) {
    case 1:
        cout << "Lunes" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        break;
    case 3:
        cout << "Miércoles" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        break;
    case 5:
        cout << "Viernes" << endl;
        break;
    case 6:
        cout << "Sábado" << endl;
        break;
    case 7:
        cout << "Domingo" << endl;
        break;
    default:
        cout << "Número inválido. Por favor ingrese un número del 1 al 7." << endl;
        break;
}

    /**Ejercicio 3: Cálculo de Promedio de Calificaciones
    Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones.
    **/
    double nota1;
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

    double media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8) / 8;
    cout << "El promedio de las calificaciones es: " << media << endl;

    /** Ejercicio 4: Promoción de "3 por 2" en Tienda
    En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.
    **/

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
if (precio1 <= precio2 && precio1 <= precio3) {
    total = precio2 + precio3;
} else if (precio2 <= precio1 && precio2 <= precio3) {
    total = precio1 + precio3;
} else {
    total = precio1 + precio2;
}

cout << "El total a pagar bajo la promoción '3 por 2' es: " << total << endl;



    return 0;
}