#include <iostream> 
#include<stdlib.h> 
#include <sstream> 
using namespace std; 

int main() { 

	// Configuración 
	setlocale(LC_ALL, "Spanish"); 
	
	// Variables 
	int* arreglo;
	int n, mayor;
	
	// Leer
	cout << "Valor de N: "; cin >> n;
	arreglo = new int[n]; // Defines el arreglo
	for( int i=0; i<n; i++){
		cout << "Valor de [" << i << "]:";
		cin  >> arreglo[i];
	}
	
	// Proceso
	mayor = arreglo[0];
	for( int i=1; i<n; i++){
		mayor = (mayor>arreglo[i])?mayor:arreglo[i];
	}
	
	// Liberar espacio ocupado por el arreglo 
	delete[] arreglo; 
	arreglo = NULL;
	
	// Reporte
	cout << "Mayor: " << mayor << endl;
	
	return 0;
}
