/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char calificacion;

    // Solicitar la calificación alfabética al usuario
    cout << "Introduce la calificación (A, B, C, D, E, F): ";
    cin >> calificacion;

    // Convertir la calificación alfabética a numérica
    switch (calificacion) {
        case 'A':
            cout << "9" << endl;
            break;
        case 'B':
            cout << "8" << endl;
            break;
        case 'C':
            cout << "7" << endl;
            break;
        case 'D':
            cout << "6" << endl;
            break;
        case 'E':
            cout << "5" << endl;
            break;
        case 'F':
            cout << "4" << endl;
            break;
        default:
            cout << "Error: Calificación no válida." << endl;
            break;
    }

    // La línea que debe cerrar correctamente la función main
    return 0;  // Este es el final de la función main
}



