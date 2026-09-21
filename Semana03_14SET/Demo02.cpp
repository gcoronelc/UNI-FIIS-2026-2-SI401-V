#include <iostream>
using namespace std;
int main() {
	int nota = 15;
	string condicion;
	if(nota>=18) condicion = "Excelente";
	else if(nota>=14) condicion = "Bueno";
	else if(nota>=10) condicion = "Aprobado";
	else if(nota>=6) condicion = "Te espero en el Susti.";
	else condicion = "Desaprobado";
	cout << "Condicion: " << condicion << endl;
	return 0;
}
