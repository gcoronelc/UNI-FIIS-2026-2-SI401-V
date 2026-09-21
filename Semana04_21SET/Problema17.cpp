/*

Problema 17
Desarrollar un programa que permita pasar 
un número de base 10 a base 16 y viceversa.

*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
	
	// Variables
	string s_numero;
	int op, numero10;
	string numero16;
	stringstream resultado;
	int resto;
	char arr1[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	
	// Lectura de Datos
	cout << "Numero: "; cin >> s_numero;
	cout << "1. Base 10 a base 16\n";
	cout << "2. Base 16 a base 10\n";
	cout << "Opcion: "; cin >> op;
	
	// Proceso
	if(op==1){ // 10 -> 16
		numero10 = stoi(s_numero);
		numero16 = "";
		while(numero10>0){
			resto = numero10 % 16;
			numero10 = numero10 / 16;
			numero16 = arr1[resto] + numero16;
		}
		resultado << numero16 << endl;
	} else if(op==2){
		resultado << "Caso 2 en proceso." << endl;
	} else {
		resultado << "Opcion incorrecta." << endl;
	}
		
	// Reporte
	cout << "\n\n";
	cout << resultado.str();
	
	return 0;
}

