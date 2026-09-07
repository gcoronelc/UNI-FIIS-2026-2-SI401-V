#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double x,y,z;
	cout<<"valor de x: "; cin>>x;
	z=(pow(x+3,2)+x+sqrt(x+5))/(pow(x,2/3.0)+1);
	cout << "z="<<z<<"\n\n";
	system("pause");
	return 0;
}
