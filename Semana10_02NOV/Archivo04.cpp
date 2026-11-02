
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream archivo("estudiantes.txt", ios::app);

    string nombre;
    int edad;

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Edad: ";
    cin >> edad;

    archivo << nombre << " - " << edad << endl;

    archivo.close();

    cout << "Datos registrados";

    return 0;
}


