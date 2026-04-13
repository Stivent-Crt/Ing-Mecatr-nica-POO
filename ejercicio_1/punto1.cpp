#include <iostream>
#include <string>

using namespace std;

int main() {
    float nota, asistencia;
    string comportamiento;

    cout << "--NOTA FINAL DEL ESTUDIANTE--" << endl << endl;

    
<<<<<<< HEAD
    cout << "1) Ingrese la nota final (0 a 100): ";
=======
    cout << "1) Ingrese la nota final (0 a 10): ";
>>>>>>> 1c4cbe04c2e73b9a740d61b368067a508399ae7a
    cin >> nota;
    cout << "2) Ingrese el porcentaje de asistencia (0 a 100): ";
    cin >> asistencia;
    cout << "3) Ingrese la calificacion de comportamiento" << endl;
    cout << "(Excelente, Bueno, Aceptable o Deficiente): ";
    cin >> comportamiento;
    cout << endl;

    if (nota < 0 || nota > 100) {
        cout << "\aError: La nota debe estar entre 0 y 100." << endl;
    }
    else if (asistencia < 0 || asistencia > 100) {
        cout << "\aError: La asistencia debe estar entre 0 y 100." << endl;
    }
    else if (comportamiento != "Excelente" && comportamiento != "Bueno" &&
             comportamiento != "Aceptable" && comportamiento != "Deficiente") {
        cout << "\aError: Comando no reconocido." << endl;
    }

    else {

        if (nota < 70 || asistencia < 85) {
            cout << "Resultado: Reprobado por rendimiento" << endl;
        }

        else if (comportamiento == "Deficiente") {
            cout << "Resultado: Reprobado por conducta" << endl;
        }
        else if (comportamiento == "Aceptable") {
            cout << "Resultado: Aprobado con observacion" << endl;
        }
        else {
            cout << "Resultado: Aprobado con excelencia" << endl;
        }
    }

    return 0;
}
    
