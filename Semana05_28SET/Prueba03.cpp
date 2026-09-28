#include <iostream> 
#include<stdlib.h> 
#include <vector> 
#include <sstream> 
using namespace std; 

int main() { 

	// Configuración 
	setlocale(LC_ALL, "Spanish"); 
	
	// Variables 
	vector<int> lista;
	
	// Datos
	lista.push_back( 50 );
	lista.push_back( 70 );
	lista.push_back( 60 );
	lista.push_back( 90 );
	lista.push_back( 80 );
	
	// Reporte
	for(int dato: lista){
		cout << dato << " ";
	}
	
	return 0;
	
}

