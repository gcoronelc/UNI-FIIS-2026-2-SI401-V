#include <iostream> 
#include <sstream> 
using namespace std;
 
int main() {
	
	stringstream salida;
	
	
	salida << "Hola\n";
	salida << "8 + 5 = " << (8+5);
	
	
	cout << salida.str();
	return 0;
	
}
