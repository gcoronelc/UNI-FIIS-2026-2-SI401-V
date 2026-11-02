#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream archivo; // Objeto para leer archivos de texto
    string linea;

    archivo.open("noticia.txt"); // Abre el archivo

	// Se lee el archivo linea x linea
    while(getline(archivo, linea)){
        cout << linea << endl;
    }

    archivo.close(); // Cierra el archivo

    return 0;
}

