#include "adivinar.h"
#include <cstdlib> // Para generar números aleatorios
#include <ctime>   // Para inicializar el generador de números aleatorios
#include <locale.h>

using namespace std;

string generarPrediccion(const string & nombre, int edad) {
    srand(time(0));

    string predicciones[] = { "Sacaras muy buena nota en M2, la asignatura de base de datos ya que se te da muy bien.",
                              "Sacaras muy mala nota en M3, porque con la semana santa se te ha olvidado todo lo aprendido.",
                              "En sistemas, M1, suspenderas, ya que se te dan fatal los windows servers y las relaciones entre dominios.",
                              "Sacaras una nota increible en M4, ya que llevas programando en python desde los 7 anyos.",
                              "Tendras la mejor nota de la classe en M5 ya que has comprado una pata de jamon para Javi." 
                              "En M15, sacaras una nota muy media, un 5 ya que no le has metido ganas."};

    int indice_prediccion = rand() % (sizeof(predicciones) / sizeof(predicciones[0]));

    return nombre + ", segon mis poderes adivinatorios, te predigo lo siguiente:\n" + predicciones[indice_prediccion];
}
