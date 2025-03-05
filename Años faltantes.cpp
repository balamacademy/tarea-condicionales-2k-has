/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int año_actual, año_objetivo;

    // Solicitar al usuario el año actual y el año objetivo
    cout << "Introduce el año actual: ";
    cin >> año_actual;
    cout << "Introduce el año objetivo: ";
    cin >> año_objetivo;

    // Calcular la diferencia de años y mostrar el resultado
    if (año_objetivo < año_actual) {
        cout << "Han pasado " << (año_actual - año_objetivo) << " agnos" << endl;
    } else if (año_objetivo > año_actual) {
        cout << "Faltan " << (año_objetivo - año_actual) << " agnos" << endl;
    } else {
        cout << "Estás en el año objetivo!" << endl;
    }

    return 0;
}


