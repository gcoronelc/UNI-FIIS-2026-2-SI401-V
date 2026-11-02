#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream archivo;

	cout << "Creación del archivo.\n\n";

    archivo.open("Datos2026.txt");

    archivo << "Universidad Nacional de Ingeniería" << endl;
    archivo << "Curso de Programación" << endl;

    archivo.close();

    cout << "Archivo generado correctamente.";

    return 0;
}

