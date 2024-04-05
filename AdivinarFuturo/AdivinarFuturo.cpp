#include <iostream>
#include "adivinar.h"
#include <locale.h>

using namespace std;
int main() {
    string nombre;
    int edad;
    setlocale(LC_ALL, "");

    cout << "Hola, Como te llamas: ";
    cin >> nombre;

    cout << "Cuantos anyos tienes, " << "? ";
    cin >> edad;

    cout << "Con estos datos adivinare que nota sacaras en una asignatura" << endl;
    cout << generarPrediccion(nombre, edad) << endl;
}
