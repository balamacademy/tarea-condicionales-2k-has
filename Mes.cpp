/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int mes;

    // Solicitar un número de mes al usuario
    cout << "Introduce un número entre 1 y 12: ";
    cin >> mes;

    // Verificar y mostrar el mes correspondiente con la cantidad de días
    switch (mes) {
        case 1: 
            cout << "Enero - 31 dias" << endl;
            break;
        case 2: 
            cout << "Febrero - 28 o 29 dias (bisiesto)" << endl;
            break;
        case 3: 
            cout << "Marzo - 31 dias" << endl;
            break;
        case 4: 
            cout << "Abril - 30 dias" << endl;
            break;
        case 5: 
            cout << "Mayo - 31 dias" << endl;
            break;
        case 6: 
            cout << "Junio - 30 dias" << endl;
            break;
        case 7: 
            cout << "Julio - 31 dias" << endl;
            break;
        case 8: 
            cout << "Agosto - 31 dias" << endl;
            break;
        case 9: 
            cout << "Septiembre - 30 dias" << endl;
            break;
        case 10: 
            cout << "Octubre - 31 dias" << endl;
            break;
        case 11: 
            cout << "Noviembre - 30 dias" << endl;
            break;
        case 12: 
            cout << "Diciembre - 31 dias" << endl;
            break;
        default:
            cout << "No existe" << endl;
    }

    return 0;
}


