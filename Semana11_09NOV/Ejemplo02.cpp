#include <iostream>
#include <cmath>

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

    // Datos
    int x = 3;
    int y = 4;
    
    // Proceso
	Punto pto(x,y);
    string cua = pto.getCuadrante();
    float d = pto.getDistancia();
    
    // Salida
	pto.mostrarPunto();
	cout << "Cuafrante: " << cua << endl;
	cout << "Distancia: " << d << endl;
    return 0;
}

