#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(const string& texto, char delimitador) {
    vector<string> partes;
    stringstream ss(texto);
    string token;

    while (getline(ss, token, delimitador)) {
        partes.push_back(token);
    }
    return partes;
}

int main(){
	
	ifstream origen;
	string linea;
	vector<string> arreglo;
	stringstream ss;
	string token, estado;
	int i, l1, l2, l3, perimetro;
	
	cout << "\n";
	origen.open("origen.txt");
	getline(origen, linea);
	linea = linea + "|ESTADO|PERIMETRO\n";
	
	ofstream destino;
	destino.open("destino.txt");
	destino << linea;
	
	while(getline(origen, linea)){
		
		arreglo = split(linea,'|');
		i = stoi( arreglo[0] );
		l1 = stoi( arreglo[1] );
    	l2 = stoi( arreglo[2] );
    	l3 = stoi( arreglo[3] );
    	
    	// Estado
    	estado = "VALIDO";
    	if( l1 >= (l2+l3) || l2 >= (l1+l3) || l3 >= (l1+l2)) {
    		estado = "INVALIDO";
		}
    	
    	// Perimetro
    	perimetro = l1 + l2 + l3;
        
       
        cout << i << "|" << l1 << "|" << l2 << "|" << l3 << "|" << estado << "|" << perimetro << "\n";
        destino << i << "|" << l1 << "|" << l2 << "|" << l3 << "|" << estado << "|" << perimetro << "\n";
        
    }
    origen.close();
    destino.close();

	return 0;
}

