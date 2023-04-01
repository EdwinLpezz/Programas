#include <iostream>
#include <string>
using namespace std;

const int cantidad=0;

struct Estudiante {
    int id;
    string nombres;
	string apellidos;
	double nota1;
	double nota2;
	double nota3;
	double nota4;
};

int main() {
    Estudiante estudiantes[cantidad];
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    
    // Solicitar la información de cada estudiante
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el id del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].id;
        cout << "Ingrese los nombres del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nombres;
        cout << "Ingrese los apellidos del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].apellidos;
        cout << "Ingrese la nota 1 del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota1;
        cout << "Ingrese la nota 2 del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota2;
        cout << "Ingrese la nota 3 del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota3;
        cout << "Ingrese la nota 4 del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nota4;
    }
    
    // Calcular el promedio y determinar si aprobaron o no
    for (int i = 0; i < n; i++) {
        double promedio = (estudiantes[i].nota1 + estudiantes[i].nota2 + estudiantes[i].nota3 + estudiantes[i].nota4) / 4.0;
        cout << "El promedio del estudiante " << estudiantes[i].nombres << " " << estudiantes[i].apellidos << " es " << promedio << endl;
        if (promedio >= 60) {
            cout << "El estudiante " << estudiantes[i].nombres << " " << estudiantes[i].apellidos << " APROBADO" << endl;
        } else {
            cout << "El estudiante " << estudiantes[i].nombres << " " << estudiantes[i].apellidos << " REPROBADO" << endl;
        }
    }
    
    return 0;
    system("pause");
}

