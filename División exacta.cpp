/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numerador, denominador;

    // Solicitar los dos números al usuario
    cout << "Introduce el numerador: ";
    cin >> numerador;
    cout << "Introduce el denominador: ";
    cin >> denominador;

    // Verificar si el denominador es cero para evitar división por cero
    if (denominador == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
    } else {
        // Verificar si la división es exacta
        if (numerador % denominador == 0) {
            cout << "La division es exacta" << endl;
        } else {
            cout << "La division NO es exacta" << endl;
        }
    }

    return 0;
}

