/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar un número entero al usuario
    cout << "Introduce un número entero: ";
    cin >> numero;

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        cout << "Numero par" << endl;
    } else {
        cout << "Numero impar" << endl;
    }

    return 0;
}

