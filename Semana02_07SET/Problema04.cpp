/*
Desarrollar un programa que muestre los primeros 
"n" términos de la serie de Fibonacci. 

El programa de solicitar el valor para "n".
*/

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	// Variables
	int n;
	stringstream reporte;
	
	// Datos
	cout << "LA  SERIE\n";
	cout << "==============\n";
	cout << "Cantidad de terminos: "; cin >> n;
	
	// Validar
	if( n<1 ){
		cout << "Valor de n incorrecto.";
		return 0;
	}
	
	// Proceso
	reporte << "0";
	if(n>=2){
		reporte << ", 1";
	}
	if(n>2){
		int a = 0;
		int b = 1;
		int c;
		for( int i=3; i<=n; i++ ){
			c = a + b;
			reporte << ", " << c;
			a = b;
			b = c;
		}
	}
	
	// Reporte
	cout << endl << endl;
	cout << "REPORTE\n";
	cout << "======================\n";
	cout << "Serie: " << reporte.str() << endl;
	return 0;
	
}
