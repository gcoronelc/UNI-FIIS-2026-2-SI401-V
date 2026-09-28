#include <iostream> 
#include<stdlib.h> 
#include <sstream> 
using namespace std; 

int main() { 

	// Configuración 
	setlocale(LC_ALL, "Spanish"); 
	
	// Variables 
	int* arreglo; // El arreglo lo creas en tiempo de ejecución
	int tamanio, numero, multiplosDe5; 
	stringstream listaNumeros; 
	
	// Lectura de datos 
	cout << "Tamaño del arreglo: "; 
	cin >> tamanio; 
	
	// Generar números aleatorios 
	arreglo = new int[tamanio]; // Crea el arreglo 
	for (int i = 0; i < tamanio; i++) { 
		arreglo[i] = rand() % 50 + 1; 
	} 
	
	// Proceso 
	listaNumeros << "Lista: "; 
	multiplosDe5 = 0;
	for (int i = 0; i < tamanio; i++) { 
		numero = arreglo[i]; 
		listaNumeros << numero << " "; 
		multiplosDe5 += (numero % 5 == 0) ? 1 : 0; 
	} 

	// Liberar espacio ocupado por el arreglo 
	delete[] arreglo; 
	arreglo = NULL; 
	
	// Reporte 
	cout << "\n"; 
	cout << listaNumeros.str() << "\n"; 
	cout << "Multiplos de 5: " << multiplosDe5 << "\n"; 
	
	return 0; 
	}

