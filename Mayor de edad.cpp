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

    // Solicitar la edad al usuario
    cout << "Introduce tu edad: ";
    cin >> edad;

    // Verificar si es mayor de edad
    if (edad >= 18) {
        cout << "Eres Mayor" << endl;
    } else {
        cout << "No eres Mayor" << endl;
    }

    return 0;
}
