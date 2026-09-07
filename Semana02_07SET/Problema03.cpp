/*
Desarrollar un programa que permita calcular la HIPOTENUSA 
de un triángulo rectángulo aplicando el teorema de Pitágoras, 
el perímetro y el área que representa, conociendo solamente 
el valor de sus catetos.
Debe mostrar un mensaje de error si los datos ingresados son incorrectos.
*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	// Variables
	float c1, c2, hipo, perimetro, area;
	
	// Datos
	cout << "DATOS\n";
	cout << "============\n";
	cout << "Cateto 1: "; cin >> c1;
	cout << "Cateto 2: "; cin >> c2;

	// Validar
	if(c1<=0 || c2<=0){
		cout << "Datos incorrectos.\n";
		cout << "Deben ser numeros mayores que cero.";
		return -1;
	}
	
	// Proceso
	hipo = sqrt(c1*c1 + c2*c2);
	perimetro = c1 + c2 + hipo;
	area = c1 * c2 / 2;
	
	// Reporte
	cout << "Hipotenusa: " << hipo << "\n";
	cout << "Perimetro: " << perimetro << "\n";
	cout << "Area: " << area<< "\n";
	return 0;
}
	
