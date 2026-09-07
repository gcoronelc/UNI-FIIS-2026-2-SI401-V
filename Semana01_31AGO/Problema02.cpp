#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double x, y, z;
	
	cout<<"Valor de x: ";
	cin>>x;
	cout<<"Valor de y: ";
	cin>>y;
	
	z=sqrt(x+pow(y,3));
	
	cout<<"Z= "<<z<<"\n\n";
	
	system("pause");
	
	return 0;
	
	
}
