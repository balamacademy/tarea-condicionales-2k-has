/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int año;

    // Solicitar al usuario el año
    cout << "Introduce un año: ";
    cin >> año;

    // Comprobar si el año es bisiesto
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        cout << "Es bisiesto" << endl;
    } else {
        cout << "No es bisiesto" << endl;
    }

    return 0;
}


