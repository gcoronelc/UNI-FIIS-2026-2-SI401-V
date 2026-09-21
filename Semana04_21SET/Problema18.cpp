/*

Problema 18
Implementar un programa que devuelva el dígito 
N-ésimo de un número, teniendo en cuenta que el 
dígito 0 es el dígito más a la derecha 
(el menos significativo). 
El programa devolverá -1 si el número no tiene 
suficientes dígitos. Considere la posibilidad de 
que N pueda ser un número negativo.

*/
#include <iostream>
using namespace std;
int main() {
	// Variables
	long num;
	int m_digito, digito;
	int cont, aux;
	
	// Lectura
	cout << "Número: "; cin >> num;
	cout << "N-Digito: "; cin >> m_digito;
	
	// Proceso
	num = num * (num<0?-1:1);
	digito = -1; // Asumo que no lo encuentra
	cont = -1;
	while( num > 0 ){
		aux = num % 10;
		num = num / 10;
		cont++;
		if(cont == m_digito){
			digito = aux;
			break;
		}
	}
		
	// Reporte
	cout << "Digito: " << digito;
	return 0;		
}
	

