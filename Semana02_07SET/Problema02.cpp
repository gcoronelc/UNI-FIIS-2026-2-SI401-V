/*
Promedio de un estudiante.
	PF = C1(20%) + EP (25%) + C2 (20%) + EF (35%)
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Datos
	int c1 = 18;
	int c2 = 10;
	int ep = 17;
	int ef = 13;
	// Proceso
	int pf = (c1*20 + ep*25 + c2*20 + ef*35) / 100;
	string condicion = (pf>=14)?"Aprobado":"Desaprobado";
	// Reporte
	cout << "REPORTE\n";
	cout << "Promedio: " << pf << endl;
	cout << "Condición: " << condicion << endl;
}
	
	
	
