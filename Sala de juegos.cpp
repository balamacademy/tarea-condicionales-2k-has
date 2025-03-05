/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int edad;

    // Solicitar al usuario que ingrese la edad
    cout << "Introduce tu edad: ";
    cin >> edad;

    // Calcular el precio según la edad
    if (edad < 4) {
        cout << "¡¡Gratis!!" << endl;
    } else if (edad >= 4 && edad <= 18) {
        cout << "Paga $5" << endl;
    } else {
        cout << "Paga $10" << endl;
    }

    return 0;
}




