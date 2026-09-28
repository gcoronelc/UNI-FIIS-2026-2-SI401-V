#include <iostream> 
#include <sstream> 
using namespace std;
 
int main() { 

	// Configuración 
	setlocale(LC_ALL, "Spanish"); 
	
	// Variables 
	int datos[] = { 900, 340, 200, 780, 250, 50 }; 
	int tamanio, numeroMayor, numeroMenor, numero; 
	stringstream arreglo; 
	
	// Proceso 
	tamanio = sizeof(datos) / sizeof(datos[0]); 
	numeroMayor = datos[0]; 
	numeroMenor = datos[0]; 
	arreglo << "Arreglo: " << datos[0]; 
	for (int i = 1; i < tamanio; i++) { 
		numero = datos[i]; 
		arreglo << " " << numero; 
		numeroMayor = (numero > numeroMayor) ? numero : numeroMayor; 
		numeroMenor = (numero < numeroMenor) ? numero : numeroMenor; 
	} 
	
	// Reporte 
	cout << arreglo.str() << "\n"; 
	cout << "Número mayor: " << numeroMayor << "\n"; 
	cout << "Número menor: " << numeroMenor << "\n"; 
	return 0; 
}

