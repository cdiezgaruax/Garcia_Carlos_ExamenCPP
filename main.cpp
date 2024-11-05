#include <iostream>
#include "eje1/eje1.h"
#include "eje2/eje2.h"
#include "eje3/eje3.h"
#include "eje4/eje4.h"
using namespace std;

int main() {
    int opcion;
    cout << "Seleccione el ejercicio que desea ejecutar (1-5): "<<endl;
    cout << "1. Identificacion de Numero Positivo, Negativo o Cero" << endl;
    cout<< "2. Dia de la Semana"<<endl;
    cout<< "3. Calculo de Promedio de Calificaciones"<<endl;
    cout<< "4. Promocion de '3 por 2' en Tienda"<<endl;
    cout<< "5. Ejecutar todos los ejercicios"<<endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            eje1();
            break;
        case 2:
            eje2();
            break;
        case 3:
            eje3();
            break;
        case 4:
            eje4();
            break;
        case 5: //para que ejecute todos los ejercicios
            eje1();
            eje2();
            eje3();
            eje4();
            break;
        default:
            cout << "Opción inválida. Por favor seleccione un número del 1 al 4." << endl;
            break;
    }

    return 0;
}