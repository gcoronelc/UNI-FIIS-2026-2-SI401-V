#include <iostream>
#include <cmath>
#include <cstdlib> // Contiene rand() y srand()
#include <ctime>   // Contiene time() para la semilla

using namespace std;

/*
 * Clase: Salud
*/
class Punto {

private:

	int x;
	int y;

public:
	
	// Constructor por defecto
	Punto(){
		x = 0;
		y = 0;
	}
	
	// Constructor con parametros
	Punto(int _x, int _y){
		x = _x;
		y = _y;
	}
	
	void mostrarPunto(){
		cout << endl;
		cout << "DATOS DEL PUNTO\n";
		cout << "---------------\n";
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	
	string getCuadrante(){
		string rpta = "";
		if(x>0 && y>0){
			rpta = "I";
		} else if(x<0 && y>0){
			rpta = "II";
		} else if(x<0 && y<0){
			rpta = "III";
		} else if(x>0 && y<0){
			rpta = "IV";
		} else if(x==0 & y==0){
			rpta = "CENTRO";
		} else if(x==0 & y!=0){
			rpta = "EJE X";
		} else {
			rpta = "EJE Y";
		}
		return rpta;
	}
	
	float getDistancia(){
		float d = sqrt( x*x + y*y);
		return d;
	}
};

int main(){
	
	// Variables
	const int N = 5;
    Punto vector[N];
    float distancia[N];
    
    // Datos
    std::srand(std::time(0));
    for(int i=0; i<N; i++){
    	int x = rand() % 30 + 5; 
    	int y = rand() % 30 + 5;
    	Punto p(x,y);
    	vector[i] = p;
	}
    
    // Proceso
    
    // 1: Calcula distancias
    for(int i=0; i<N; i++){
    	distancia[i] = vector[i].getDistancia();
    }
    
    // 2: Encuentra puntos cerca y lejos, y la suma de distancias
    int indPtoCerca, indPtoLejos;
    float distPtoCerca, distPtoLejos, sumaDistancia;
    Punto ptoCerca, ptoLejos;
    // Se asuma que el punto de indice 0 es el que esta mas cerca y mas lejos
	indPtoCerca = 0;
	distPtoCerca = distancia[0];
	indPtoLejos = 0;
	distPtoLejos = distancia[0];
	sumaDistancia = distancia[0];
	// Se determina los puntos correctos
	for(int i=1; i<N; i++){
		// Suma
		sumaDistancia += distancia[i];
		// Pubto mas cerca
		if(distancia[i] < distPtoCerca){
			indPtoCerca = i;
			distPtoCerca = distancia[i];
		}
		// Punto mas lejos
		if(distancia[i] > distPtoLejos){
			indPtoLejos = i;
			distPtoLejos = distancia[i];
		}
	}
	float disPromedio = sumaDistancia / N;

    // Salida
    cout << "LOS PUNTOS\n\n";
	for(int i=0; i<N; i++){
		vector[i].mostrarPunto();
	}
	cout << "\nPunto mas cerca\n";
	vector[indPtoCerca].mostrarPunto();
	cout << "\nPunto mas lejos\n";
	vector[indPtoLejos].mostrarPunto();
	cout << endl;
	cout << "Cantidad de puntos: " << N << endl;
	cout << "Distancia promedio: " << disPromedio << endl;
    return 0;
}

