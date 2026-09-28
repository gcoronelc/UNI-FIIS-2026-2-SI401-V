#include <iostream> 
#include <sstream> 
using namespace std; 
int main() { 

	// Configuración 
	setlocale(LC_ALL, "Spanish"); 
	
	// Variables 
	int datos[] = { 10, 20, 15, 40, 35, 100, 75 }; 
	int tamanio, sumaPares, sumaImpares; 
	stringstream arreglo; 
	
	// Proceso 
	tamanio = sizeof(datos) / sizeof(datos[0]); 
	sumaPares = 0; 
	sumaImpares = 0; 
	arreglo << "Arreglo: "; 
	for (int i = 0; i < tamanio; i++) { 
		arreglo << datos[i] << " "; 
		if (datos[i] % 2 == 0) { 
			sumaPares += datos[i]; 
		} else {
			sumaImpares += datos[i]; 
		} 
	} 
	
	// Reporte 
	cout << arreglo.str() << "\n"; 
	cout << "Suma de pares: " << sumaPares << "\n"; 
	cout << "Suma de impares: " << sumaImpares << "\n"; 
	return 0; 
}

