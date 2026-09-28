#include <iostream> 
using namespace std;

int main() { 

	// Variables 
	int n;
	int* datos; 
	int suma;
	float media, mediana; 
	
	// Leer el arreglo
	cout << "Valor de N: "; cin >> n;
	datos = new int[n]; // Defines el arreglo
	for( int i=0; i<n; i++){
		cout << "Datos[" << i << "]:";
		cin  >> datos[i];
	}
		
	// Ordenamiento
	for(int i=0; i<(n-1); i++){
		for(int j=i+1; j<n; j++){
			if(datos[i]>datos[j]){
				int t = datos[i];
				datos[i] = datos[j];
				datos[j] = t;
			}
		}
	}
	
	// Calcular promedio
	media = 0.0;
	for(int i=0; i<n; i++){
		media += datos[i];
	}
	media = media / n;
	
	// Calcular la mediana
	if(n%2==0){
		mediana = (datos[n/2] + datos[n/2-1])/2;
	} else {
		mediana = datos[n/2];
	}
	
	// Salida o reporte
	cout << "\nSuma: " << suma << endl;
	cout << "Media: " << media << endl;
	cout << "Mediana: " << mediana << endl;
	return 0;
}
