#include <iostream>

using namespace std;

/*
 * Clase: Salud
*/
class Salud {

private:

	string nombre;

public:	

	// Constructor por defecto
	Salud(){
		nombre = "Gustavo Coronel";
	}
	
	// Constructor con parametros
	Salud( string _nombre){
		nombre = _nombre;
	}
	
	float calcularIMC( float pesoKg, float alturaMet){
		float imc = pesoKg / (alturaMet*alturaMet);
		return imc;
	}
	
	void mostrarNombre(){
		cout << "Nombre: " << nombre << endl;
	}
	
	
};


int main(){

    // Datos
    float peso = 80;
    float altura = 1.70;
    
    // Proceso
    //Salud salud; // Se crea una instancia, se crea el objeto.
    Salud salud( "Pedro Vargas" ); // Se crea una instancia, se crea el objeto.
    float imc = salud.calcularIMC(peso,altura);
    
    // Saluda
    cout << "";
    salud.mostrarNombre();
	cout << "IMC: " << imc << endl;

    return 0;
}
