#include <iostream>
using namespace std;

int main()
{
	int fac = 1,x = 1,num;
	cout << "Bienvenido. Este programa sirve para calcular factoriales" << endl;
	cout << "Por favor escribe un numero entero positivo: ";
	cin >> num;
	while (x <= num)
	{
		fac = fac * x;
		x++;
	}
	cout << "El factorial es: " << fac << endl;
	return 0;
}
