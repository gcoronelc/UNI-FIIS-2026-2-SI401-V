#include <iostream> 
using namespace std;

int main() { 
	// Configuración 
	setlocale(LC_ALL, "Spanish"); 
	// Variables 
	int datos[] = { 12, 23, 54, 67, 32, 87, 65 }; 
	int suma, tamanio; 
	// Proceso 
	tamanio = sizeof(datos) / sizeof(datos[0]); 
	suma = 0; 
	for (int i = 0; i < tamanio; i++) { 
		cout << "G ";
		suma += datos[i]; 
	} 
	// Reporte 
	cout << "Tamaño: " << tamanio << "\n"; 
	cout << "Suma: " << suma << "\n"; 
	return 0; 
}





