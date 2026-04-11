#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int edad, cantidad;
    string estudiante = "n", dia;
    float total;
    float precio = 100.0;

    cout << "---PELISPLUS---" << endl << endl;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "¿Es estudiante universitario? (s/n): ";
        cin >> estudiante;
    }

    cout << "Ingrese el dia de la semana: ";
    cin >> dia;
    cout << "Ingrese la cantidad de entradas a comprar: ";
    cin >> cantidad;

    if (edad < 5) precio *= 0.40;
    else if (edad <= 12) precio *= 0.50;
    else if (edad <= 17) precio *= 0.70;
    else if (edad <= 64) {
        if (estudiante == "s") precio *= 0.45;
    } 
    else precio *= 0.60;

    if (dia == "lunes" || dia == "martes" || dia == "miercoles" || dia == "jueves" ||
        dia == "Lunes" || dia == "Martes" || dia == "Miercoles" || dia == "Jueves") {
        precio *= 0.90;
    }

    total = precio * cantidad;

    if (cantidad > 3) {
        total *= 0.95;
    }

    cout << fixed << setprecision(2);
    cout << "El precio final total a pagar es: $" << total << endl;

    return 0;
}
