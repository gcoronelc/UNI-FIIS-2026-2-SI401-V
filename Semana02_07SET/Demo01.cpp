#include <iostream>
#include <sstream>

using namespace std; 

int main() { 

	stringstream reporte;
	
	reporte << "Hola\n";
	reporte << "Hola\n";
	reporte << "Hola\n";
	reporte << "Hola\n";
	reporte << "Hola\n";
	
	cout << reporte.str();
	
	return 0;
}
