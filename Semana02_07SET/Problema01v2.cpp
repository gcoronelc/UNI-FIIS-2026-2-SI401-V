/*
Se debe aplicar el operdor ternario.
Generar los numeros de manera aleatoria.
*/
#include <iostream>
#include <string>
#include <cstdlib> // Contiene rand() y srand()
#include <ctime>   // Contiene time()

using namespace std;

int main() {
	// Inicializar el generador de numeros aleatorios
	srand(time(nullptr));
	
	// Variables
	int n1, n2, n3, n4, menor;
	string mensaje;
	// Datos
	n1 = rand() % 11;
	n2 = rand() % 11;
	n3 = rand() % 11;
	n4 = rand() % 11;
	// Proceso
	if( n1==n2 && n1==n3 && n1==n4){
		mensaje = "Todos son iguales";
	} else {
		menor = n1; // Punto de partida.
		menor = (menor>n2)?n2:menor;
		menor = (menor>n3)?n3:menor;
		menor = (menor>n4)?n4:menor;
		mensaje = "El menor es " + to_string(menor);
	}
	// Reporte
	cout << "REPORTE\n";
	cout << "===================\n";
	cout << mensaje;
	return 0;
}
