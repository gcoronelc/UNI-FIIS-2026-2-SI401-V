#include <iostream> 
using namespace std;

int main() { 

	// Variables 
	const int N = 6;
	int datos[N]; 
	int suma, promedio; 
	
	// lectura
	cout << "Lectura de Notas\n";
	for( int i=0; i<N; i++){
		cout << "Nota[" << i <<"]: ";
		cin  >> datos[i];
	}
	
	// Ordenamiento
	for(int i=0; i<(N-1); i++){
		for(int j=i+1; j<N; j++){
			if(datos[i]<datos[j]){
				int t = datos[i];
				datos[i] = datos[j];
				datos[j] = t;
			}
		}
	}
	
	// Calcular promedio
	suma = datos[0] + datos[1] + datos[2] + datos[3];
	promedio = suma / 4;
	
	// Salida o reporte
	cout << "\nSuma: " << suma << endl;
	cout << "Promedio: " << promedio << endl;
	return 0;
}
