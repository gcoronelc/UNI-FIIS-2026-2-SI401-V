/*
Se debe aplicar el operdor ternario.
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	// Variables
	int n1, n2, n3, n4, menor;
	string mensaje;
	// Datos
	n1 = 4;
	n2 = 4;
	n3 = 2;
	n4 = 4;
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
