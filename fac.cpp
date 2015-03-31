#include <iostream>
using namespace std;

long int fac(long int a)
{
	long int fac = 1,x = 1;
	while (x <= a)
	{
		fac = fac * x;
		x++;
	}
	return fac;
}
int main()
{
	long int num;
	cout << "Bienvenido. Este programa sirve para calcular factoriales" << endl;
	cout << "Por favor escribe un numero entero positivo: ";
	cin >> num;
	cout << "El factorial es: " << fac(num) << endl;
	return 0;
}
