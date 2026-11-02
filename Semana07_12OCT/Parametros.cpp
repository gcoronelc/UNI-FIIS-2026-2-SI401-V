/*
Parametros de entrada y salida.
*/

#include <iostream> 
using namespace std;

void calcularCubo(int n, double &cubo, double &cuadrado) {
    cubo = n * n * n;
    cuadrado = n * n;
}


int main() { 

	int a = 5;
	double b = 0, c = 0;;
	
	calcularCubo(a, b, c);
	
	cout << a << "  elebado al 3: " << b << endl;
	cout << "El cuadrado de 5: " << c << endl;
	
	return 0;
	
}
