/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int unidades;
    float precio_unitario, precio_bruto, iva, total;

    // Solicitar el número de unidades y el precio unitario
    cout << "Introduce el número de unidades: ";
    cin >> unidades;
    cout << "Introduce el precio unitario: ";
    cin >> precio_unitario;

    // Calcular el precio bruto
    precio_bruto = unidades * precio_unitario;

    // Calcular el IVA
    iva = precio_bruto * 0.15;

    // Calcular el precio total (precio venta + IVA)
    total = precio_bruto + iva;

    // Aplicar el descuento si el precio bruto es mayor a 1000
    if (total > 1000) {
        total -= total * 0.05; // Aplicar un descuento del 5%
    }

    // Mostrar el total a pagar
    cout << "Pagar $" << total << endl;

    return 0;
}





